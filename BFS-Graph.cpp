#include<bits/stdc++.h>
using namespace std;
class graph
{
    int v;
    list<int> *adj;
    public:
    graph(int v);
    void add(int x ,int y);
    void bfs(int s);
};
graph::graph(int v)
{
    // this->v = v;
    adj = new list<int>[v];
}
void graph::add(int x , int y)
{
   adj[x].push_back(y);
}
void graph :: bfs(int s)
{
     bool *visited = new bool[v];
     for(int i = 0; i < v; i++){
        visited[i] = false;
     }
     list<int> queue ;
     visited[s] = true;
     queue.push_back(s);
     
     list<int>::iterator i;
      while(!queue.empty())
      {
          s=queue.front();
          cout<<s<<" ";
          queue.pop_front();
          for (i = adj[s].begin(); i != adj[s].end(); ++i){
            if (!visited[*i]){
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
      }
    
}
int main()
{
     int v,edges,x,y,a;
    cin>>v;       //vertex
    graph g(v);
    cin>>edges;
    for(int i=0; i<edges; i++)
    {
       cin>>x>>y;
       g.add(x,y);
    
    }
    cin>>a; //enter the verte you want to traverse
    g.bfs(a);
}