#include<bits/stdc++.h>
using namespace std;
list<int>adj[10000];
int color[100];
void dfs(int s , bool visited[]){
    visited[s] = true;
    list<int>::iterator i;
    for(i=adj[s].begin(); i!=adj[s].end(); i++){
        if(visited[*i]==false){
            visited[*i] = true;
            if(color[s]==1){
                color[*i] = 2;
        }
        else{
            color[*i] = 1;
        }
            dfs(*i, visited);
        }
    }
}
int main(){
    int n,m,i,x,y;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool visited[n+1];
    int level[n+1];
    for(i=0; i<n; i++){
        visited[i] = false;
    }
    color[1] = 1;
    dfs(1 , visited);
    int count=0, count1=0;
      for(i=0; i<n; i++){
          if(color[i]%2==0) {
              count++;
          }
          else{
              count1++;
          }
      }
      cout<<(count*count1)-m<<endl;
}
    