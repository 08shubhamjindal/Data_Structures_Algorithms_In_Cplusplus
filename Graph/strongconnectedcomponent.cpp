#include<bits/stdc++.h>
using namespace std;
stack<int>stackk;
std::vector<int>adj[100];
vector<int>adjj[100];
bool vis[100] = {false};
bool viss[100] = {false};
void dfss(int s){
    cout<<s<<" ";
    viss[s] = true;
    //  list<int>::iterator i;
     for(int i=0; i<adjj[s].size(); i++){
        int t = adjj[s][i];
        if(viss[t]==false){
            dfss(t);
        }
    }
}
void dfs(int s){
    vis[s] = true;
      for(int i=0; i<adj[s].size(); i++){
        int t = adj[s][i];
        if(vis[t]==false){
            dfs(t);
        }
    }
    stackk.push(s);
}
int main(){
    int n,m,x,y,i;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(i=0; i<n; i++){
        if(vis[i]==false){
            dfs(i);
        }
    }
    for(i=0; i<n; i++){
        // list<int>::iterator ii;
         for(int ii=0; ii<adj[i].size(); ii++){
             int tt = adj[i][ii];
            adjj[tt].push_back(i);
        }
    }
    // vis[n+1] = {false};
    while(stackk.empty()==false){
        int v = stackk.top();
        stackk.pop();
        if(viss[v]==false){
            dfss(v);
            cout<<endl;
        }
    }
}