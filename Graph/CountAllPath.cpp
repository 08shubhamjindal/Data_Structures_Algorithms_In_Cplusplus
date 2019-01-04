#include<bits/stdc++.h>
using namespace std;
list<int> adj[10000];
// int count = 0;
void dfs(int s , int d ,int &count ,bool visited[]){
    visited[s] = true;
    if(s==d){
        count++;
    }
    else{
         list<int>::iterator i;
         for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        if (!visited[*i]) 
            dfs(*i, d ,count, visited);
    }
    visited[s] = false;
}
int main(){
    int n,m,i,x,y,source , dest, count=0;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bool visited[n+1];
    cin>>source>>dest;
    for(i=0; i<n; i++){
        visited[i] = false;
    }
    dfs(source , dest , count , visited);
    cout<<count<<endl;
}