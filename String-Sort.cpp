// Given a string S, and two numbers N, M - arrange the characters of string in between the indexes N and M (both inclusive) in descending order. (Indexing starts from 0).

// Input Format:
// First line contains T - number of test cases.
// Next T lines contains a string(S) and two numbers(N, M) separated by spaces.

// Output Format:
// Print the modified string for each test case in new line.



// SAMPLE INPUT

// 3
// hlleo 1 3
// ooneefspd 0 8
// effort 1 4

// SAMPLE OUTPUT

// hlleo
// spoonfeed
// erofft





#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios::sync_with_stdio(false);
ll n;
cin >> n;
while(n--)
{
string x;
ll l,r;
cin >> x >> l >> r;
sort(x.begin()+l,x.begin()+r+1,greater<ll>());
cout << x << "\n";
}
return 0;
}