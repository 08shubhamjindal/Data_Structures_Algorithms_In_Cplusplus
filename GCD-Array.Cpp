Bob has an array A of size N. He doesn't like arrays in which the of all elements is not K. He can perform multiple operations on an array. In each operation, he can either increase or decrease the value of an element by 1.
You have to tell the minimum operation Bob will take to make

of all elements in an array equal to K or any multiple of K?

Note: The smallest value up to which you can decrease any element is 1. You cannot make any element smaller than 1.

GCD here is Greatest Common Divisor.

Input Format

The first line contains T, the number of test cases.

For Each Testcase :
The first line contains 2 integers - K and N respectively, separated by a space.
The second line contains N integers, separated by a space, in order of their position in array.

Input Constraints




Output Format

For each test case, print minimum number of operations Bob take in a new line.
SAMPLE INPUT

1
5 3
4 5 6 

SAMPLE OUTPUT

2

Explanation

Testcase 1:
In first operation, increase value of 4 by 1.
In second operation, decrease value of 6 by 1.
MInimum operations = 1+1=2


#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int i,j,t,n,count=0,k;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>k>>n;
        long long int a[n+1];
        for(j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(j=0; j<n; j++)
        {
            if(a[j]!=1 && a[j]>k)
            {
                count = count + min((a[j]%k) , (k-(a[j]%k)));
            }
            else
            {
                count = count + (k-a[j]);
            }
        }
        cout<<count<<endl;
        count=0;
    }
}