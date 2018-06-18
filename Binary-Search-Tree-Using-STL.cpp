// Given an array A of N integers, classify it as being Good Bad or Average. It is called Good, if it contains exactly X distinct integers, Bad if it contains less than X distinct integers and Average if it contains more than X distinct integers.

// Input format:
// First line consists of a single integer T denoting the number of test cases.
// First line of each test case consists of two space separated integers denoting N and X.
// Second line of each test case consists of N space separated integers denoting the array elements.

// Output format:
// Print the required answer for each test case on a new line.

// Constraints:


// SAMPLE INPUT

// 4
// 4 1
// 1 4 2 5
// 4 2
// 4 2 1 5
// 4 3
// 5 2 4 1
// 4 4
// 1 2 4 5

// SAMPLE OUTPUT

// Average
// Average
// Average
// Good
#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
for(int a=0;a<t;a++){
long long n,x;
cin>>n;
cin>>x;
set<long long> s;
int b;
for( long long i=0;i<n;i++)
{
cin>>b;
s.insert(b);
}
if(s.size()==x){cout<<"Good"<<endl;}
if(s.size()<x){cout<<"Bad"<<endl;}
if(s.size()>x){cout<<"Average"<<endl;
}
}

}
