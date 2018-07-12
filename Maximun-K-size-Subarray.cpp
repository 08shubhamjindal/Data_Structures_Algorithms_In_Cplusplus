// Given an array A of size 'N' and an integer k, find the maximum for each and every contiguous subarray of size k.

// Input :

//     First line contains 2 space separated integers 'N' and 'k' .
//     Second line contains 'N' space separated integers denoting array elements.

// Output:

//     Space separated Maximum of all contiguous sub arrays of size k.

// Constraints :

//     1<= N <=10^5
//     1<= Ai <=10^9
//     1<= k <=N

// SAMPLE INPUT

// 9 3
// 1 2 3 1 4 5 2 3 6

// SAMPLE OUTPUT

// 3 3 4 5 5 5 6

// Explanation

// First Sub array of size 3 : 1 2 3, here maximum element is 3

// second Sub array of size 3 : 2 3 1, here maximum element is 3

// third Sub array of size 3 : 3 1 4, here maximum element is 4

// fourth Sub array of size 3 : 1 4 5, here maximum element is 5

// Fifth Sub array of size 3 : 4 5 2, here maximum element is 5

// Sixth Sub array of size 3 : 5 2 3, here maximum element is 5

// Seventh Sub array of size 3 : 2 3 6, here maximum element is 6


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,maxi=0;
    cin>>n>>m;
    long long int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<=n-m; i++)
    {
        for(j=i; j<i+m; j++)
        {
            maxi = max(maxi , a[j]);
        }
        cout<<maxi<<" ";
        maxi=0;
      
    }
}