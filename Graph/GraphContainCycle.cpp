#include<bits/stdc++.h>
using namespace std;
list<int> adj[10000];
void dfs(int s , bool visited[] , bool anc[]){
    visited[s] = true;
    anc[s] = true;
    list<int>::iterator ii;
    for(ii=adj[s].begin(); ii!=adj[s].end(); ii++){
         if(*ii==adj[s].back()){
            anc[s] = false;
        }
          if(visited[*ii]==false){
            anc[*ii]=true;
            visited[*ii]=true;
            dfs(*ii,visited, anc);
        }
    }
}
int main(){
    int n,m,i,x,y;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bool visited[n+1];
    bool anc[n+1];
    for(i=0; i<n; i++){
        visited[i] = false;
        anc[i] = false;
    }
    dfs(1 , visited , anc);
    int flag=0;
    for(i=1; i<=n; i++){
        if(visited[i]==true && anc[i]==true){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
      cout<<"Yes"<<endl;  
    }
    else{
        cout<<"No"<<endl;
    }
}