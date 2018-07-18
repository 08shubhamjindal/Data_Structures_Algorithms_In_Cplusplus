Find Connected Components By DFS Algorithm
Input File
6
4
1 2
2 3
1 3
4 5 

Output

Number of connected components: 3 




#include<bits/stdc++.h>
using namespace std;
vector <int> adj[10];
bool visited[10];
void dfs(int s)
{
    visited[s]=true;
    for(int i=0; i<adj[s].size(); i++)
    {
        if(visited[adj[s][i]]==false)
        {
            dfs(adj[s][i]);
        }
    }
}
void mark()
{
    for(int i=0; i<10; i++)
    {
        visited[i] = false;
    }
}
int main()
{
    int nodes,edges,x,y,count=0;
    cin>>nodes;
    cin>>edges;
    for(int i=0;i<edges; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    mark();
    for(int i=1; i<=nodes; i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
    