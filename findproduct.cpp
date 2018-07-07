Finding Product
Problem Description

You are given a set of N positive integers and two small prime numbers P and Q (not necessarily distinct). You need to write a program to count the number of subsets of the set of N numbers whose product is divisible by PQ (the product of P and Q). Since the number K of such sets can be huge, output K modulo 1009 (the remainder when K is divided by 1009).

Constraints

N <= 300

P,Q <=50

The integers are <= 10000

Input Format

First line three comma separated integers N, P,Q

The next line contains N comma separated integers

Output

One integer giving the number of subsets the product of whose elements is divisible by PQ. Give the result modulo 1009.

Test Case
Explanation

Example 1

Input

4,5,7

5,49,10,27

Output

6

Explanation

N is 4, P is 5, Q is 7. We need to find subsets of the numbers given so that the product of the elements is divisible by 35 (the product of 5 and 7). These subsets are (5,49),(5,49,10),(5,49,27),(5,49,10,27), (49,10),(49,10,27). There are 6 subsets, and the output is 6.

Example 2

Input

4,11,13

3,7,12,13

Output

0

Explanation

N is 4, P is 11, Q is 13. We need to find subsets of the numbers given so that the product of the elements is divisible by 143 (the product of 11 and 13).As none of the N numbers is divisible by 11 (a prime number), there are no subsets for which the product of the elements is divisible by 143. Hence the output is 0.




#include<bits/stdc++.h>
using namespace std;
void subsetSums(long long int arr[], long long int n, long long int l ,long long int r)
{
    long long total = 1<<n;
    long long int count=0;
 
    for(long long int  i=0; i<total; i++)
    {
        long long int sum = 1;
 
         for (long long int j=0; j<n; j++)
            if (i & (1<<j))
                sum = sum *arr[j];
                
         long long int p = l*r;
          if(sum%p==0)
          {
              count++;
          }
     }
       cout<<count<<endl;
       count=0;
}

int main()
{
    long long  n,l,r,i,k=0;
    long long arr1[3];
    memset(arr1,0,sizeof(arr1));
    string s,temp="";
    cin>>s;
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]==44)
        {
            
            for(int j=0;j<(int)temp.size();j++)
              arr1[k]=arr1[k]*10+(temp[j]-'0'); 
            
            temp="";
            k++;
        }
        else temp+=s[i];
    }
   for(int j=0;j<(int)temp.size();j++)
      arr1[k]=arr1[k]*10+(temp[j]-'0'); 
    n=arr1[0];
    l=arr1[1];
    r=arr1[2];
    
    
    
    cin>>s;
    temp="";
    
    long long int arr[n+1];
    memset(arr,0,sizeof(arr));
    k=0;
    
    
    
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]==44)
        {
            
            for(int j=0;j<(int)temp.size();j++)
              arr[k]=arr[k]*10+(temp[j]-'0'); 
            
            temp="";
            k++;
        }
        else temp+=s[i];
    }
   for(int j=0;j<(int)temp.size();j++)
               arr[k]=arr[k]*10+(temp[j]-'0'); 
    
    subsetSums(arr, n ,l,r);
    return 0;
}