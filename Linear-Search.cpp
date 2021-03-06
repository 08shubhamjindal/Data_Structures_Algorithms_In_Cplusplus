// Given A Series Of N Positive Integers a1,a2,a3........an. , Find The Minimum And Maximum Values That Can Be Calculated By Summing Exactly N-1 Of The N Integers. Then Print The Respective Minimum And Maximum Values As A Single Line Of Two Space-Separated Long Integers.

// Input Format

// First Line Take Input Value Of N

// Second Line Take Input N Space Separated Integer Value

// Output Format

// Two Space Separated Value ( One Maximum Sum And One Minimum Sum )

// Constraints

//     0 < N < 100001
//     0 <= ai < 1013

// SAMPLE INPUT

// 5
// 1 2 3 4 5

// SAMPLE OUTPUT

// 10 14

// Explanation

// Our initial numbers are 1,2,3,4 and 5. We can calculate the following sums using four of the five integers:

//     If we sum everything except 1, our sum is 2+3+4+5=14 .
//     If we sum everything except 2, our sum is 1+3+4+5=13 .
//     If we sum everything except 3, our sum is 1+2+4+5=12 .
//     If we sum everything except 4, our sum is 1+3+4+5=11 .
//     If we sum everything except 5, our sum is 1+2+3+4=10 .

// As you can see, the minimal sum is 1+2+3+4=10 and the maximal sum is 2+3+4+5=14. Thus, we print these minimal and maximal sums as two space-separated integers on a new line.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
     cin>>n;
    long long int k[n+1];
    int sum=0;
    for(i=0; i<n; i++)
    {
        cin>>k[i];
    }
    sort(k,k+n);
    for(i=0; i<n-1; i++)
    {
        sum=sum+k[i];
    }
    cout<<sum<<" ";
    sum=0;
     for(i=1; i<n; i++)
    {
        sum=sum+k[i];
    }
    cout<<sum;
    sum=0;
    return 0;
}