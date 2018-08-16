#include<bits/stdc++.h>
using namespace std;
class graph{
    int v;
    list<int> *adj;
    public:
     graph(int v);
     void addedges(int x ,int y);
     void topologicalsort();
     void topologicalsortmake(int i ,bool visited[] , stack<int> &ss);
};
graph::graph(int v){
    this->v = v;
    adj = new list<int>[v];
}
void graph :: addedges(int x ,int y){
    adj[x].push_back(y);
}
void graph :: topologicalsortmake(int i , bool visited[] , stack<int> &ss)
{
    visited[i] = true;
    list<int>::iterator j;
    for(j= adj[i].begin(); j!=adj[i].end(); j++)
    {
          if (!visited[*j])
            topologicalsortmake(*j, visited, ss);
    }
    
    ss.push(i);
}
void graph :: topologicalsort()
{
     stack<int> ss ;
    bool *visited = new bool[v];
    for(int i= 0; i<v; i++)
    {
        visited[i] = false;
    }
     for(int i = 0; i<v; i++){
         if(visited[i]==false){
             topologicalsortmake(i , visited , ss);
         }
     }
     while(ss.empty()==false)
     {
         cout<<ss.top()<<" ";
         ss.pop();
     }
    
}

int main()
{
    int v,edges , x,y,i;
    cin>>v; // vertex
    graph g(v);
    cin>>edges;
    for(i=0; i<edges; i++)
    {
        cin>>x>>y;
        g.addedges(x, y);
    }
    g.topologicalsort();
}