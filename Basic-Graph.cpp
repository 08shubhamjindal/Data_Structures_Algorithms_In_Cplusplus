
// Basic Implementation of Undirected Graph using STL 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m; // n -> node and m -> Edges
   vector<vector<int> >v(n+1);
   for(int i=0; i<m; i++)
   {
       int x,y;
       cin>>x>>y;
       v[x].push_back(y);  
       v[y].push_back(x);
   }
   for(int i=1; i<=n; i++)
   {
       cout<<"Node  "<<i<<"  is connected to following elements"<<endl;
       for(int j=0; j<v[i].size(); j++)
       {
        cout<<v[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}