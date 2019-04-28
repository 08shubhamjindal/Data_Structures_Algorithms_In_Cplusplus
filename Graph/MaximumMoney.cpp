 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long  long  arr[n+1][3];
    int x,y,z;
    cin>>x>>y>>z;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=2;j++)
        cin>>arr[i][j];
    }
    long long dp[n+1][x+1][y+1][z+1];
    memset(dp,-1,sizeof(dp) );
    int curr=1,next=0;
    dp[0][0][0][0]=0;
    dp[0][1][0][0]=arr[1][0];
    dp[0][0][1][0]=arr[1][1];
    dp[0][0][0][1]=arr[1][2];
    long long ans=max(max(arr[1][0],0ll),max(arr[1][1],arr[1][2]));
    for(int i=2;i<=n;i++) {
        next=i-1;
        curr=i-2;
        for(int j=0;j<=x;j++)
        {
            for(int k=0;k<=y;k++)
            {
                for(int l=0;l<=z;l++)
                {
                   
                  if(1)
                  {
                      dp[next][j][k][l]=dp[curr][j][k][l];
                      if(j>0&&dp[curr][j-1][k][l]!=-1){
                          dp[next][j][k][l]=max(dp[next][j][k][l],dp[curr][j-1][k][l]+arr[i][0]);
                      }
                      if(k>0&&dp[curr][j][k-1][l]!=-1)
                      {
                          dp[next][j][k][l]=max(dp[next][j][k][l],dp[curr][j][k-1][l]+arr[i][1]);
                      }
                      if(l>0&&dp[curr][j][k][l-1]!=-1){
                          dp[next][j][k][l]=max(dp[next][j][k][l],dp[curr][j][k][l-1]+arr[i][2]);
                      }
                      if(j+k+l<=n)
                      ans=max(ans,dp[next][j][k][l]);
                  }
                  else
                  {
                      break;
                  }
                }
            }
        }
    }
    cout<<max(0ll,ans)<<endl;
}