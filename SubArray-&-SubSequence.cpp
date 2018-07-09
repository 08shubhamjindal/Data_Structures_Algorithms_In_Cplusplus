Given an array A of N elements, find the maximum possible sum of a

    Contiguous subarray
    Non-contiguous (not necessarily contiguous) subarray.

Empty subarrays/subsequences should not be considered.

Input :

    First line of the input has an integer T. T cases follow.
    Each test case begins with an integer N . In the next line,N integers follow representing the elements of array A.

Output :

    Two, space separated, integers denoting the maximum contiguous and non-contiguous subarray. At least one integer should be selected and put into the subarrays

Constraints :

    1<=T<=10
    1<=N<=10^5
    -10^4<=Ai<=10^4

SAMPLE INPUT

1
6
2 -1 2 3 4 -5

SAMPLE OUTPUT

10 11

#include<bits/stdc++.h>
using namespace std;
void subArray(long long int arr[], long long int n)
{
    long long int sum= 0,maxi=-10001;
    for (long long int i=0; i <n; i++)
    {

        for (long long int j=i; j<n; j++)
        {
            for (long long int k=i; k<=j; k++)
            {
                sum = sum + arr[k];
                
            }
              maxi = max(maxi , sum);
          sum=0;
        }
         
    }
    cout<<maxi<<" ";
    sum=0;
}
void printSubsequences(long long int arr[], long long int n)
{
    unsigned int opsize = pow(2, n);
    long long int sum1= 0,maxi=-10001;
    for (long long int counter = 1; counter < opsize; counter++)
    {
        for (long long int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
            {
            sum1 = sum1 + arr[j];
           
            }
               
        }
        maxi = max(maxi , sum1);
        sum1=0;
      
    }
     cout<<maxi<<" ";
    sum1=0;
}
int main()
{
    long long int t,i,j,n;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        long long int arr[n+1];
        for(j=0; j<n; j++)
        {
        cin>>arr[j];
        }
    subArray(arr, n);
    printSubsequences(arr,n);
    cout<<"\n";
    }
    return 0;
}