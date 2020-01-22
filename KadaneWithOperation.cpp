Given an array of integers. The task is to find the maximum sum of all the elements of the array after performing the given two operations once each.
The operations are:

1. Select some(possibly none) continuous elements from the beginning of the array and multiply by -1.
2. Select some(possibly none) continuous elements from the end of the array and multiply by -1.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int sum = 0;
    for(i=0; i<n; i++){
        sum = sum + a[i];
    }
    int max_far = INT_MIN, max_end = 0;
    for(i=0; i<n; i++){
        max_end = max_end + a[i];
        if(max_end > max_far){
            max_far = max_end;
        } 
        if(max_end < 0){
            max_end = 0;
        }
    }
    cout<<(2*max_far - sum);
    
    
}
