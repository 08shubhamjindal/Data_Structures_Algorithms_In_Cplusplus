#include<bits/stdc++.h>
using namespace std;
list<int> adj[10000];
void dfs(int s, bool visited[]){
    visited[s] = true;
    list<int>::iterator i;
    for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        if (!visited[*i]) 
            dfs(*i, visited);
}
int main(){
    int n,m,i,x,y,j,count=0,maxi=-1;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool visited[n+1];
      for(j=0; j<n; j++){
          visited[j] = false;
      }
      for(j=0; j<n; j++){
      if(visited[j] == false){
           dfs(j , visited);
            count++;
      }
    }
       cout<<count<<endl; 
    }