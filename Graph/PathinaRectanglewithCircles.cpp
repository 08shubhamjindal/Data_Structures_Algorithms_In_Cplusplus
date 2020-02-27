#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k,r,i,j,l;
    cin>>m>>n>>k>>r;
    int a[m+1][n+1];
    int x[k+1],y[k+1];
    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            a[i][j] = 1;
        }
    }
    for(l=0; l<k; l++){
        cin>>x[l];
    }
    for(l=0; l<k; l++){
        cin>>y[l];
    }
    for(j=0; j<k; j++){
        int xx = x[j];
        int yy = y[j];
        xx--;
        yy--;
        for(i=yy-r; i<=yy+r; i++){
            if(i>=0 && i<n){
            a[xx][i] = 0;
            }
        }
        for(i=xx-r; i<=xx+r; i++){
            if(i>=0 && i<m){
            a[i][yy] = 0;
            }
        }
    }
    if(a[0][0]==0 || a[m-1][n-1]==0){
        cout<<"NO"<<endl;
    }else{
        bool vis[m+1][n+1];
        for(i=0;i<m; i++){
            for(j=0; j<n; j++){
                vis[i][j]==false;
            }
        }
        std::queue<pair<int, int>>q;
        q.push({0,0});
        vis[i][j]==true;
        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();
            if(p.first+1<m && vis[p.first+1][p.second]==false && a[p.first+1][p.second]==1){
                vis[p.first+1][p.second]=true;
                q.push({p.first+1,p.second });
            }
            if(p.second+1<n && vis[p.first][p.second+1]==false && a[p.first][p.second+1]==1){
                vis[p.first][p.second+1] = true;
                q.push({p.first,p.second+1});
            }
        }
        
        if(vis[m-1][n-1]==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    
}
