// You are given an array of n numbers and q queries. For each query you have to print the floor of the expected value(mean) of the subarray from L to R.
// INPUT :

// First line contains two integers N and Q denoting number of array elements and number of queries.

// Next line contains N space seperated integers denoting array elements.

// Next Q lines contain two integers L and R(indices of the array).

// OUTPUT:

// print a single integer denoting the answer.

// Constarint:

// 1<= N ,Q,L,R <= 10^6

// 1<= Array elements <= 10^9

// NOTE

// Use Fast I/O

// Problem setter : Sheldon Tauro

// SAMPLE INPUT

// 5 3
// 1 2 3 4 5
// 1 3
// 2 4
// 2 5

// SAMPLE OUTPUT

// 2 
// 3
// 3
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,q,x,s=0,l,r;
cin>>n>>q;
ll a[n];
a[0]=0;
for(int i=1;i<=n;i++)
{
cin>>x;
s+=x;
a[i]=s;
}
while(q--)
{
cin>>l>>r;
cout<<(a[r]-a[l-1])/(r-l+1)<<endl;
}
return 0;
}
