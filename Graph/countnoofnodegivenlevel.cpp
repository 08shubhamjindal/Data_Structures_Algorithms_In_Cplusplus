#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,x,y,level;
    cin>>n>>m;
     list<int> adj[10000];
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
   
    bool visited[n+1];
    int leve[n+1];
    cin>>level;
    for(i=0; i<n; i++){
        visited[i] = false;
    }
    list<int> queue;
    list<int>::iterator ii;
    queue.push_back(0);
    visited[0] = true;
    leve[0] = 0;
    while(!queue.empty()){
        int s = queue.front();
        queue.pop_front();
        for(ii=adj[s].begin(); ii!=adj[s].end(); ++ii){
        if(visited[*ii]==false){
            leve[*ii] = leve[s] + 1;
            visited[*ii] = true;
            queue.push_back(*ii);
        }
        
    }
        }
        int count=0;
    for(i=0; i<n; i++){
        if(leve[i] == level)
        {
            count++;
        }
    }
    cout<<count<<endl;
}