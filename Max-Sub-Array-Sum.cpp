 Xsquare has decided to win next Programming Marathon and started his preparation for the same. Xsquare's coach advised him to revise algorithmic concepts and to try twik of some standard problem. Xsquare's coach knows that it is the only best strategy to perform well at any kind of marathon.

Xsquare started following his coach's instructions and getting better and better as the day passes. One fine day, Xsquare has taken up the following standard problem.

Given a one dimensional array A of size N that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum.

Xsquare modified the above problem to make it bit more interesting .

Given a one dimensional array A of size N that may contain both positive and negative integers and an integer K, find the sum of contiguous subarray of numbers which has the largest sum such that no element in the selected array is greater than K. To make this problem a bit harder, Xsquare decided to add Q queries to this problem each containing one integer i.e K.
Input

First line of input contains two integers N and Q denoting the size of array A and number of queries respectively. Second line of each test case contains N space separated integers denoting array A. Next Q lines of each test cases contains a single integer denoting K.
Output

For each query, print the required answer.
Note

If there is no element X in the array such that X ≤ K for some K, print "No Solution" without quotes.
Constraints

    1 ≤ N,Q ≤ 5*105
    -109 ≤ Ai,K ≤ 109
    All test data is strictly according to constraints

Subtasks

    Subtask1 : 1 ≤ N,Q ≤ 5*103 , 0 ≤ Ai ≤ 109 (20 pts)
    Subtask2 : 1 ≤ N,Q ≤ 5*103 , -109 ≤ Ai ≤ 109 (20 pts)
    Subtask3 : 1 ≤ N,Q ≤ 5*105 , -109 ≤ Ai ≤ 109 (60 pts)

SAMPLE INPUT

5 6
1 2 3 4 5
5
4
3
2
1
0

SAMPLE OUTPUT

15
10
6
3
1
No Solution


Explanation

Q1 : Chosen subarray is [1,2,3,4,5]. sum of elements = 15. Q2 : Chosen subarray is [1,2,3,4]. sum of elements = 10. Q3 : Chosen subarray is [1,2,3]. sum of elements = 6. Q4 : Chosen subarray is [1,2]. sum of elements = 3. Q5 : Chosen subarray is [1]. sum of elements = 1. Q6 : There is no element X in array A such that X <= 0. Therefore, answer is "No Solution".


#include<bits/stdc++.h>
using namespace std;
// void maxSubArraySum(long long int a[], long long int size)
// {
//     long long int max_so_far = INT_MIN, max_ending_here = 0;
//         for (long long int i = 0; i < size; i++)
//     {
//         max_ending_here = max_ending_here + a[i];
//         if (max_so_far < max_ending_here)
//         {
//             max_so_far = max_ending_here;
//         }
//         if (max_ending_here < 0)
//         {
//             max_ending_here = 0;
//         }
//     }
    
//   cout<<max_so_far<<endl;
// }

----------------------------------------------------
// void maxSubArraySum(long long int a[], long long int size)
// {
//   long long int max_so_far = a[0];
//   long long int curr_max = a[0];
 
//   for (long long int i = 1; i < size; i++)
//   {
//         curr_max = max(a[i], curr_max+a[i]);
//         max_so_far = max(max_so_far, curr_max);
//   }
//   cout<<max_so_far<<endl;
// }
-----------------------------------------------------
int maxSubArraySum(long long int a[], long long int size)
{
    long long int max_so_far = INT_MIN, max_ending_here = 0,
       start =0, end = 0, s=0;
 
    for (long long int i=0; i< size; i++ )
    {
        max_ending_here += a[i];
 
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout<<max_so_far<< endl;
}
 
int main()
{
   long long  int n,m,i,j,m1;
    cin>>n>>m;
    long long int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<m; j++)
    {
        cin>>m1;
        if(m1>0)
        {
        // long long int max_sum = 
        maxSubArraySum(a, m1);
        // cout<<max_sum<<endl;
        }
        else
        {
            cout<<"No Solution"<<endl;
        }
    }
}