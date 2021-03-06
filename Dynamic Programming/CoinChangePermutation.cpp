#include<bits/stdc++.h>
using namespace std;
int solve(int coin[] , int m , int total ){
    int i,j,x,y;
 int table[total+1][m];
 for(i=0; i<m; i++){
     table[0][i] = 1;
 }
 for(i=1; i<=total; i++){
     for(j=0; j<m; j++){
         if(i-coin[j]>=0){
             x = table[i-coin[j]][j];
         }else{
             x = 0;
         }
         if(j>=1){
             y = table[i][j-1];
         }else{
             y = 0;
         }
         table[i][j] = x +y;
     }
 }
 return table[total][m-1];
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