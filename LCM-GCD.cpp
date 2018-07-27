N archers are shooting arrows at targets. There are infinite targets numbered starting with 1. The ith archer shoots at all targets that are multiples of k(i).

Find the smallest target that is hit by all the archers.
Input

The first line contains an integer T - the total no. of testc ases.

T test cases follow. Each test case is of the following format:

The first line contains a natural number - N - the number of archers. The second line contains N space-separated integers, where the ith 
integer denotes the value of k(i) for the ith archer.
Output

For each test case, print the smallest target that is hit by all archers on a new line.
Constraints

SAMPLE INPUT

1
3
2 3 4

SAMPLE OUTPUT

12

Explanation

The first archer shoots at targets 2, 4, 6, 8, 10, 12, 14, ...

The second archer shoots at targets 3, 6, 9, 12, ...

The third archer shoots at targets 4, 8, 12, 16, 20, ...

The smallest target at which all archers shoot is 12




#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
if (b==0)
return a;
return gcd(b, a%b);
}
ll findlcm(ll a[], ll n)
{
ll ans = a[0];
for (int i=1; i<n; i++)
ans = (((a[i]*ans)) /(gcd(a[i], ans)));
return ans;
}
int main()
{
int t;
cin>>t;
while(t--)
{
ll a[10000],n;
cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
cout<<findlcm(a,n)<<endl;
}

return 0;
}
