// Count all possible paths between two vertices
#include<bits/stdc++.h>
using namespace std;
void countpath(int s, int d , bool vis [] , vector<int>adj[], int &pathcount){
    vis[s] = true;
    if(s==d){
        pathcount++;
    }else{
    for(auto i=adj[s].begin(); i!=adj[s].end(); i++){
        if(vis[*i]==false){
            countpath(*i, d, vis , adj, pathcount);
        }
    }}
    
    vis[s] = false; 
    
}
int main(){
    int n,i,x,y,s,d,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    cin>>s>>d;
    bool vis[n+1] = {false};
    int pathcount = 0;
    countpath(s, d, vis, adj, pathcount);
    std::cout << pathcount << std::endl;
}
