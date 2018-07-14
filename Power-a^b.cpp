Given two number A and B. Calculate the value of AB. Output may be too large so print the answer modulo 10^9+7.

Input:
Input contains two integers A and B separated by space.

Output:
Print value of AB modulo 10^9+7.

Constraints:
Test File 1 to 5:
1<=A<=10
1<=B<=10

Test File 6 to 10:
1<=A<=106
1<=B<=1010
SAMPLE INPUT

2 5

SAMPLE OUTPUT

32

#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int power(long long int a , long long int b)
{
    if(b==0)
    {
        return 1;
    }
    else if(b%2==0)
    {
        return power(a*a%m , b/2);
    }
    else
    {
        return (a*power(a*a%m , (b-1)/2))%m;
    }
}
int main()
{
    long long int a,b;
    cin>>a>>b;
    cout<<power(a,b)%m;
    // if(b=0)
    // {
    //     return 1;
    // }
}