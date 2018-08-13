#include<bits/stdc++.h>
using namespace std;
struct node
{
    int first, second;
};
int main()
{
    int n,u,v,x,weight;
    cin>>n; // enter the number of vertex
    std::vector <node> edges[n];
    cin>>x; // how many edges want to add
     for(int i = 0 ; i<x; i++){
      cin>>u>>v>>weight;
      edges[u].push_back({v, weight});
      edges[v].push_back({u, weight});
   }
   int src = 0;
   int distance[n];
   for(int i = 0 ; i<n; i++){
       distance[i] = INT_MAX;
   }
    deque <int> q;
    distance[src] = 0;
    q.push_back(src);
     while(!q.empty())
     {
         int v = q.front();
         q.pop_front();
         for(int  i = 0 ; i<edges[v].size(); i++)
         {
             if(distance[edges[v][i].first]  > distance[v] + edges[v][i].second)
             {
                 distance[edges[v][i].first]  = distance[v] + edges[v][i].second ;
             
             if(edges[v][i].second == 0)
             {
                 q.push_front(edges[v][i].first);
             }
             else
             {
                 q.push_back(edges[v][i].first);
             }
             }
         }
     }
     for(int i = 0 ; i<n; i++)
     {
         cout<<distance[i]<<" ";
     }
    
}


INPUT
9
13
0 1 0
0 7 1
1 7 1
1 2 1
2 3 0
2 5 0
2 8 1
3 4 1
3 5 1
4 5 1
5 6 1
6 7 1
7 8 1
OUTPUT
0 0 1 1 2 1 2 1 2  