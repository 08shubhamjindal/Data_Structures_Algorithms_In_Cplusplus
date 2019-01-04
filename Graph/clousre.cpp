#include<bits/stdc++.h>
using namespace std;
list<int> adj[100000];
void dfs(int s, bool visited[]){
    visited[s] = true;
    list<int>::iterator i;
    for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        if (!visited[*i]) 
            dfs(*i, visited);
}
int main(){
    int n,m,i,x,y,j;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
        bool visited[n+1];
        for(int ii=0; ii<n; ii++){
             for(j=0; j<n; j++){
            visited[j] = false;
        }
           dfs(ii,visited);
           for(j=0 ; j<n; j++)
           {
               if(visited[j]==true)
               {
                   cout<<"1 ";
               }
               else{
                   cout<<"0 ";
               }
           }
           cout<<endl;
        }
}
    

