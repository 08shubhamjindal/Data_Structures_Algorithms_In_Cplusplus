#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x,y,s,p;
    cin>>n>>m;
    list<int> adj[n+1];
    for(int i=0; i<m; i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int p=0; p<n; p++){
    bool visited[n+1];
    for(int k=0 ; k<n; k++){
        visited[k] = false;
    }
    std::vector<int>v ;
    list<int> queue;
    list<int>::iterator ii;
    queue.push_back(p);
    visited[p] = true;
    while(!queue.empty()) {
          s = queue.front();
          queue.pop_front();
          v.push_back(s);
    for(ii=adj[s].begin(); ii!=adj[s].end(); ++ii){
        if(visited[*ii]==false){
            visited[*ii] = true;
            queue.push_back(*ii);
        }
    }
}
if(v.size()==n)
{
    cout<<p<<endl;
}
    }
    
}