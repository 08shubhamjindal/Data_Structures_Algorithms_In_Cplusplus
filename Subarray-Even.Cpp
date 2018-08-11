// This is a DEBUGGING question.

// You have an array of length N. A subarray is called Interesting if it contains only even numbers. You have to  find the maximum length of such Interesting subarray.

// You are given a code which does the given task but has some bugs (errors). You have to make changes in the given function such that the code handles all the cases for errors and generate correct output every time.

// Input
// First line contains T , denoting number of test cases.
// Each test case contains two lines:
//     - First line contains an integer N denoting the size of the array.
//     - Second line contains N space seperated integers denoting the value of array elements.

// Ouput:
// For each test case, print the maximum length of Interesting subarray. If no such subarray exist,print -1.

// Input Constraints:

// Note:

// The input and output is handled by the code itself. You are just supposed to correct the function.
// SAMPLE INPUT

// 1
// 4
// 5 2 4 7

// SAMPLE OUTPUT

// 2

// Explanation

// We can select 2nd and 3rd element as both are even numbers and form a subarray of length 2.


#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long int t,n;
cin>>t;
while(t--){
cin>>n;
   long int a[n],i,aq=0,max=0;
    for(i=0;i<n;i++) 
    {
        cin>>a[i];
    }
   for(i=0;i<n;i++)
   {
   if(a[i]%2==0)
   {
    max++;
    }
   else
{
   if(max>aq)
{
   aq=max;
}
   max=0;
}
}
    if(max>aq)
    {
        aq=max;
    }
   if(aq!=0)
   {
   cout<<aq<<endl;
   }
   else
   cout<<-1<<endl;
   }
return 0;
}