#include<bits/stdc++.h>
using namespace std;

int zero_one_knapsack(int index, int wt[], int val[], int bag_value, int n){
    if(index>=n){
        return 0;
    }
    if(bag_value==0) return 0;
    if(dp[index][bag_value]!=-1){dp[index][bag_value]}
    if(wt[index]<=bag_value){
        int left = val[index] + zero_one_knapsack(index+1, wt, val, bag_value-wt[index], n);
        int right = zero_one_knapsack(index+1, wt, val, bag_value, n);
        return dp[index][bag_value] = max(left, right)
         
    }else{
        return dp[index][bag_value] = zero_one_knapsack(index+1, wt, val, bag_value, n);
    }
}
int main(){
    cin>>n;
    for(i=0; i<n; i++){
        cin>>wt[i];
    }
    for(i=0; i<n; i++){
        cin>>val[i];
    }
    cin>>bag_value;
    
    cout<<zero_one_knapsack(0,wt, val, bag_value,n);
}
