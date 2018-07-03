// Aishwarya was saying this to her friend Puper. Puper motivated her for screwing up the things related to math and said he will also help her if needed.

// Being motivated, she started up practicing hard problems of maths and she got stuck in a problem and asked for help from Puper. She is playing with XOR, given an array (containing only 0 and 1) as element of N length.

// Given L and R, she wants to know the value of XOR of all elements from L to R (both inclusive) and number of unset bits (0's) in the given range of the array.
// Being new she finds it tough so she ask for help from Puper. Puper also finds it tough and confusing. So he ask for your help.
// INPUT:-
// The first line contains the number N and the next line contains N numbers containing 0 and 1 only. Next line contain number of query q, and next q lines contains L and R.
// OUTPUT:-
// For each query print the xor value and number of unset bits in that range.
// CONSTRAINT:-
// 1<=N<=100000 (1-based indexing of elements)
// 1<=Q<=N
// 1<=L<=R<=100000
// 0<=R-L<=100000
// SAMPLE INPUT

// 5
// 1 0 0 0 1
// 3
// 2 4
// 1 5
// 3 5

// SAMPLE OUTPUT

// 0 3
// 0 3
// 1 2

// Explanation

// In the given case the bit sequence is of length 5 and the sequence is 1 0 0 0 1. For query 1 the range is 2 4, and the answer is (array[2] xor array[3] xor array[4]) = 0, and number of zeroes are 3, so output is 0 3. Similarly for other queries.


#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,i,j,l,q,r,w,count=0,xorr=0;
    cin>>n; 
    long long int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(j=0; j<q; j++)
    {
        cin>>l>>r;
        for(w=l-1; w<=r-1; w++)
        {
            xorr = xorr ^ a[w];
            if(a[w]==0)
            {
                count++;
            }
        }
        cout<<xorr<<" "<<count<<endl;
        xorr=0;
        count=0;
    }
}