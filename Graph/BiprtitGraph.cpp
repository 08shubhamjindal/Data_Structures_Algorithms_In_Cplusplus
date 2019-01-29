#include<bits/stdc++.h>
using namespace std;
list<long long int>adj[100005];
bool visited[100005];
int color[100005]={1};
void dfs(int s , bool visited[]){
    std::list<long long int>::iterator ii ;
    visited[s] = true;
    for(ii=adj[s].begin(); ii!=adj[s].end(); ii++){
        if(visited[*ii]==false){
            visited[*ii]=true;
            if(color[s]==1){
                color[*ii]==0;
            }
            else{
                color[*ii] = 1;
            }
            dfs(*ii , visited);
        }
    }
}
int main(){
    long long int n,i,x,y;
    cin>>n;
    for(i=1; i<=n-1; i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(i=1; i<=n; i++){
        visited[i]=false;
    }
    for(i=1; i<=n; i++){
        if(visited[i]==false){
            dfs(i,visited);
        }
    }
    long long int count=0, count1=0;
    for(i=1; i<=n; i++)
    {
        if(color[i]==true)
        {
            count++;
        }
        else{
            count1++;
        }
    }
    cout<<count*count1 - (n-1)<<endl;
}