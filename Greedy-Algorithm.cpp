// Little Pandey and GJ are coding buddies - since they are the part of ACM ICPC team together. But, GJ is fed up of Pandey's weird coding habits - like using editors which are slow, and irritating. Importantly, GJ believes that Pandey over-complicates a task while solving it.

// So, to prove his point he gives Pandey a trivial task to solve. He gives him N numbers, and tells him to repeat the following operation. Pandey can choose two numbers and replace them with one number, equal to their sum. It takes some time of course. It turns out that the needed time is equal to a new number.

// For example, if Pandey sums 2 and 3, he gets a number 5 and it takes him 5 units of time.

// Now, GJ asks Pandey to keep summing numbers till there is only one number left in the array. GJ is sure that Pandey will do it in the worst possible way - he will maximize the amount of time taken.

// GJ wants to predict the total time Pandey will take to complete this task. Unfortunately, GJ's slow mathematical skills are failing him, so he calls you for help. You know what you need to do next!

// Input format:
// The first line contains an integer T, denoting the number of test cases. Then, T test cases follow.

// Each test case consist of two lines. The first line contains an integer N, denoting the size of the array chosen by GJ. The second line contains contain N integers, denoting the initial numbers in an array.

// Output format:
// For every array, find out the total time taken by Pandey to finish the described process.

// Constraints:
// 1 ≤ T ≤ 102
// 1 ≤ N ≤ 106
// 1 ≤ Ai ≤ 107 - where Ai denotes the i-th initial element of an array.
// The sum of values of N in one test file won't exceed 5 * 106.
// SAMPLE INPUT

// 2
// 4
// 4 2 1 3
// 5
// 2 3 9 8 4

// SAMPLE OUTPUT

// 26
// 88

#include<bits/stdc++.h>
using namespace std;
int main()
{  long long int t,i,j,n,sum=0,sum1=0;
    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>n;
    long long int a[n+1];    
    for(j=0; j<n; j++)
    {
        cin>>a[j];
    }
    sort(a,a+n,greater<int>());
    for(j=0; j<n-1; j++)
    {
       sum= sum + a[j];
       sum1 = sum1+ sum+a[j+1];
    }
    cout<<sum1<<endl;
    sum=0; sum1=0;
}
    
}