No problem statement.

Find the logic from the given sample input/output.

And answer Q queries.

Constraints :

1 <= Value <= 100000

1<=nunber of query<=10000
SAMPLE INPUT

8
10
30
45
9
69
77
127
150

SAMPLE OUTPUT

8
42
33
4
27
19
1
222

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        for(j=1; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                sum =  sum + j;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}