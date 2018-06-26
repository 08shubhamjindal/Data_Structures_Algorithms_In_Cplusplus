Given an array A consisting of integers of size N, you need to sort this array in non-decreasing order on the basis of the absolute value of the integers in the array. Print the sorted array to output then.

Input:

The first line consists of a single integer N, the number of elements in the array. The next line consists of N space separated elements. No two elements in the array will have same absolute value.

Output:

You need to print the absolute sorted array. See the sample output for clarification.
SAMPLE INPUT

10
9 -10 -11 20 1 2 -3 4 -5 6

SAMPLE OUTPUT

1 2 -3 4 -5 6 9 -10 -11 20 

Explanation

The output array is sorted by absolute values.

#include<bits/stdc++.h>
using namespace std;
int partition(long long int *a , long long int start , long long int end)
{
     long long int pivot = a[end];
     long long int  pindex = start;
    for(int i = start;  i<end ;  i++)
    {
        if(abs(a[i]) <= abs(pivot))
        {
            swap(a[i] , a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex] , a[end]);
    return pindex;
}
int quicksort(long long int *a , long long int start ,long long int end)
{
    if(start <  end)
    {
       long long  int pindex = partition(a, start, end);
        quicksort(a, start ,pindex-1);
        quicksort(a , pindex+1 , end);
    }
}
int main() 
{ 
 long long int n,i,j,temp;
    cin>>n; 
 long long  int a[n+1];
   for(i=0; i<n; i++) { 
    cin>>a[i]; 
} 
quicksort(a, 0,n-1);
   for(i=0; i<n; i++) { 
cout<<a[i]<<" "; 
}
} 

