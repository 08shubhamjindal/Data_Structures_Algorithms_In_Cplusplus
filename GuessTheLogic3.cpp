Solve the mystery. Using sample input and output, figure out the logic to solve the question.
Input

First number is T, the number of test cases. Next T numbers are integers, N.
Output

Print T lines containing an answer corresponding to the T input numbers.
Constraints

1<=T<=10^4

1<=N<=10^8
SAMPLE INPUT

10
2
6
12
60
5
169
1
8
23
100

SAMPLE OUTPUT

2
4
6
12
2
3
1
4
2
9

olve the mystery. Using sample input and output, figure out the logic to solve the question.
Input

First number is T, the number of test cases. Next T numbers are integers, N.
Output

Print T lines containing an answer corresponding to the T input numbers.
Constraints

1<=T<=10^4

1<=N<=10^8
SAMPLE INPUT

10
2
6
12
60
5
169
1
8
23
100

SAMPLE OUTPUT

2
4
6
12
2
3
1
4
2
9

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        for(j=1; j<=sqrt(a[i]); j++)
        {
            if(a[i]%j==0)
            {
                if(a[i]/j==j)
                {
                    count++;
                }
                else
                {
                count= count+2;
                }
            }
        }
        cout<<count<<endl;
        count=0;
    }
}