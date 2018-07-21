You are asked to calculate factorials of some small positive integers.

Input
An integer T, denoting the number of testcases, followed by T lines, each containing a single integer N.

Output
For each integer N given at input, output a single line the value of N!

Input Constraint

1 <= T <= 100
1 <= N <= 100
SAMPLE INPUT

4
1
2
5
3

SAMPLE OUTPUT

1
2
120
6



#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
int a[200]; 
int n,i,j,temp,m,x;

scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
a[0]=1;
m=1;
temp = 0; 
for(i=1;i<=n;i++)
{
for(j=0;j<m;j++)
{
x = a[j]*i+temp; 
a[j]=x%10; 
temp = x/10; 
}
while(temp>0) 
{
a[m]=temp%10;
temp = temp/10;
m++; 
}
}
for(i=m-1;i>=0;i--) 
printf("%d",a[i]);
printf("\n");
}
return 0;
}
