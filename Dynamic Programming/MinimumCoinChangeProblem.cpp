#include<bits/stdc++.h>
using namespace std;
int solve(int coin[] , int n , int total ){
    int i,j;
    int table[total+1];
    table[0] = 0;
    for(i=1; i<=total; i++){
        table[i] = INT_MAX;
    }
    for(i=1; i<=total; i++){
        for(j=0; j<n; j++){
            if(coin[j]<=i){
               int result = table[i-coin[j]];
               if(result !=INT_MAX && result + 1 < table[i]){
                   table[i] = result + 1;
               }
            }
        }
    }
    return table[total];
}
int main(){
    int n,i,total;
    cin>>n;
    int coin[n+1];
    for(i=0; i<n; i++){
        cin>>coin[i];
    }
    cin>>total;
    cout<<solve(coin , n , total)<<endl;
}