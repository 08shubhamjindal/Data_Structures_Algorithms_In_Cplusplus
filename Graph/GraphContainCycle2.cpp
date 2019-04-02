#include<bits/stdc++.h>
using namespace std;
int parent[1000] = {-1};
std::vector<int>adj[1000] ;
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void unionn(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}
int graph(int m){
     for(int i=0; i<m; i++){
       int  x = find_set(adj[i][0]);
        int y = find_set(adj[i][1]);
        if(x==y){
            return true;
        }
        unionn(x,y);
    }
    return false;
}
int main(){
    int n,i,m,x,y;
    cin>>n;
    cin>>m;
    for(i=0; i<m; i++){
        cin>>x>>y;
        adj[i].push_back(x);
        adj[i].push_back(y);
    }
    for(i=0; i<n; i++){
        parent[i] = i; // make_set
    }
    if(graph(m)==true){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
}