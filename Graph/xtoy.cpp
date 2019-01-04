#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    list<int>adj[10000];
    int level[10000];
    bool visited[10000];
    list<int>queue;
    list<int>::iterator ii;
    queue.push_back(x);
    visited[x] = true;
    level[x] = 0;
    for(int i=0; i<10000; i++){
        visited[i]=false;
    }
    while(!queue.empty()){
        int s = queue.front();
        if(s==y){
            cout<<level[s]<<endl;
            break;
        }
        else{
        queue.pop_front();
        adj[s].push_back(s*2);
        if((s-1)>=0){
        adj[s].push_back(s-1);
        }
        for(ii=adj[s].begin(); ii!=adj[s].end(); ii++){
            if(visited[*ii]==false){
                visited[*ii] = true;
                level[*ii] = level[s] + 1;
                queue.push_back(*ii);
            }
        }
        }
    }   
}