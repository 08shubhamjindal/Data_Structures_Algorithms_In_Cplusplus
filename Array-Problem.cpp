// Little Deepu loves positive things in life, positive girlfriends, positive marks. He's, in general a lover of positive things, so for obvious reasons he loves an array which contains positive elements.

// Anyway, Little Deepu also thinks that not every value in his so called positive array deserves to be valued so high, so he makes an operation called HIT which takes exactly one argument, i.e., HIT (X). When HIT (X) is called, it decreases the value of all the elements of the array by 1 which are greater than X.

// Now, to test how positive can you stay in life, he performs M HIT operations, and after they have been done, Deepu wants you to print the final array.

// Input:
// First line contains N the size of array. Second lines contains N elements of array. Third line contains an integer M next M lines contains a single integer X.

// Output:
// Print final array after M HIT operations.

// Constraints:
// 1<=N<=100000
// 1<=A[i]<=1000000000
// 1<=M<=20000
// 1<=X<=1000000000
// SAMPLE INPUT

// 5
// 7 8 3 2 10
// 4
// 1
// 3
// 5
// 7

// SAMPLE OUTPUT

// 5 5 2 1 7

#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int n,m,i,j,b;
    cin>>n;
      int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m; 
    for(j=0; j<m; j++)
    {
        cin>>b;
    for(i=0; i<n; i++)
    {
        if(a[i]>b)
        {
            a[i] = a[i] - 1;
        }
    }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}