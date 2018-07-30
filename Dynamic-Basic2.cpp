There are 'n' cities in a country. The cities are numbered from 1,2,.... n . Each city has a[i] number of houses in it.

Given q queries, u need to tell how many houses will be there in between city 'l' and city 'r' both inclusive.

Input :

    test cases ,t
    no. of cities , n
    no. of houses in each city a[i]
    no. of queries
    city 'l' and city 'r'

Output:

Desired o/p

Constraints:

    1<=t<=10
    1<=n<=100000
    1<=a[i]<=10^9
    1<=q<=100000
    1<=l<=r<=n

Note : Use Fast I/O to handle large test files..
SAMPLE INPUT

1
5
4 3 2 1 5
3
1 2
2 4
1 4

SAMPLE OUTPUT

7
6
10

Explanation

Sample test case : Self Explanatory

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
long t,l;
cin>>t;
for(l=0;l<t;l++){
long n,q,k,i,j,s,r;
cin>>n;
long a[n];
a[0]=0;
for(i=1;i<=n;i++){
cin>>k;
a[i]=a[i-1]+k;
}
cin>>q;
long ans[q];
for(i=0;i<q;i++){
cin>>s>>r;
ans[i]=a[r]-a[s-1];
}
for(i=0;i<q;i++)
cout<<ans[i]<<"\n";
}
return 0;
}