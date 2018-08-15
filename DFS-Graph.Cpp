#include<bits/stdc++.h>
using namespace std;
class graph{
    int v;
    list<int>*adj;
     void dfsmake(int s , bool visited[]);
    public:
    graph(int v);
    void addedges(int x ,int y);
    void dfs(int s);
   
};
graph::graph(int v){
    this->v = v;
    adj = new list<int> [v];
}
void graph :: dfsmake(int s ,bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    
      list<int>::iterator i;
    for (i = adj[s].begin(); i != adj[s].end(); i++)
    {
        if (!visited[*i])
        {
            dfsmake(*i, visited);
        }
    }
}
void graph :: dfs(int s){
    bool *visited = new bool[v];
    for(int i = 0; i<v; i++){
        visited[i] = false;
    }
    
    dfsmake(s , visited);
}
void graph:: addedges(int x ,int y){
    adj[x].push_back(y);
}
int main()
{
    int v, edges ,x,y,vertex ,i;
    cin>>v; //vertex
    graph g(v);
    cin>>edges ;
    for(i=0; i<edges; i++)
    {
        cin>>x>>y;
        g.addedges(x,y);
    }
    cin>>vertex; // for treverse
    g.dfs(vertex);
}