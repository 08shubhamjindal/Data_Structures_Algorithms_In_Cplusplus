#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool visit[1000][1000];
ll N;

bool check(ll x, ll y){
for(ll i=0;i<N;i++){

for(ll j=0;j<N;j++){

if(i==x || j==y || (x+y)==(i+j) || (x-y)==(i-j))
if(visit[i][j]==1)
return 1;

}
}
return 0;
}

bool nqueen(ll n){

if(n==0)
return 1;

for(ll i=0;i<N;i++){

for(ll j=0;j<N;j++){
if(check(i,j))
continue;

visit[i][j]=1;
if(nqueen(n-1))
return 1;
visit[i][j]=0;

}
}
return 0;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
N=n;
for(ll i=0;i<=N;i++)
for(ll j=0;j<=N;j++)
visit[i][j]=0;

if(nqueen(n)){
cout<<"YES\n";
for(ll i=0;i<N;i++){
for(ll j=0;j<N;j++){
cout<<visit[i][j]<<" ";
}
cout<<endl;
}

}
else{
cout<<"NO\n";
}
return 0;
}