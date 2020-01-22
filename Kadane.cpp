#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j;
    cin>>n>>k;
    int a[n+1];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int maxi = INT_MIN;
    for(i=0; i<=k; i++){
        int  max_end = 0 , max_far = INT_MIN;
        for(j=i; j<n; j=j+k){
            max_end = max_end + a[j];
            if(max_far< max_end){
                max_far = max_end;
            }
            if(max_end < 0){
                max_end = 0;
            }
        }
        maxi = max(maxi, max_far);
    }
    cout<<maxi<<endl;
}
