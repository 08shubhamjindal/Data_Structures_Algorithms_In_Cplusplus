#include<bits/stdc++.h>
using namespace std;
int arr[1000005],par[1000005],sz[1000005],mini[1000005],maxm[1000005];
int parent(int s){
    if(par[s]==s)
    return s;
    return par[s]=parent(par[s]);
}
void merge(int l,int r){
    if(sz[l]>=sz[r]){
        par[r]=par[l];
        sz[l]+=sz[r];
        mini[l]=min(mini[l],mini[r]);
        maxm[l]=max(maxm[l],maxm[r]);
    }
    else{
        par[l]=r;
        sz[r]+=sz[l];
        mini[r]=min(mini[l],mini[r]);
        maxm[r]=max(maxm[l],maxm[r]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        mini[i]=maxm[i]=arr[i];
        par[i]=i;
        sz[i]=1;
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int type;
        scanf("%d",&type);
        if(type==1){
          int l,r;
          scanf("%d %d",&l,&r);
          int l0=parent(l),r0=parent(r);
          if(l0!=r0){
              merge(l0,r0);
          }
    }
    else{
            int l;
            scanf("%d",&l);
            int l0=parent(l);
            printf("%d\n",maxm[l0]-mini[l0]);
        }
    }
}