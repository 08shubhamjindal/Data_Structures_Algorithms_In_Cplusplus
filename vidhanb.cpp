#include<bits/stdc++.h>
#define pb          push_back
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;

char a[21][21];
vector<pair<int,int>>v;
int vis[21][21],n;
int b[8][2]={{0,1},{0,-1},{1,1},{1,0},{1,-1},{-1,1},{-1,0},{-1,-1}};
void dfs(int x,int y)
{
  vis[x][y]=1;
  for(int i1=0;i1<8;i1++)
  {
    if(x+b[i1][0]>=0&&x+b[i1][0]<n&&y+b[i1][1]>=0&&y+b[i1][0]<n&&
      vis[x+b[i1][0]][y+b[i1][1]]==0&&a[x+b[i1][0]][y+b[i1][1]]=='R')
    {
      vector<char> v1;
     x=x+b[i1][0],y=y+b[i1][1];
     for(int i=0;i<8;i++)
     {
     if(x+b[i][0]>=0&&x+b[i][0]<n&&y+b[i][1]>=0&&y+b[i][1]<n&&
       a[x+b[i][0]][y+b[i][1]]!='M'&&a[x+b[i][0]][y+b[i][1]]!='A'
       &&a[x+b[i][0]][y+b[i][1]]!='R'&&a[x+b[i][0]][y+b[i][1]]!='D')
      {
      v1.pb(a[x+b[i][0]][y+b[i][1]]);
      }       
     }
     if(v1.size()==0)
      cout<<"NO HURDLES";
     else
     {
      sort(v1.begin(),v1.end());
      for(int i=0;i<(int)v1.size()-1;i++)
      cout<<v1[i]<<" ";
      cout<<v1.back();
     }
     cout<<endl;
      dfs(x,y);
    }       
  }
}

int main()
{ 
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  memset(vis,0,sizeof(vis));
  cin>>n;char c[n][n];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      {cin>>a[i][j];c[i][j]=a[i][j];}
    for(int i=0;i<n;i++)
    sort(c[i],c[i]+n);
   dfs(0,0);
   cout<<"DESTINATION"; 
}