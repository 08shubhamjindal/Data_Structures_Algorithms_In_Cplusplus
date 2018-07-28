#include<bits/stdc++.h>
using namespace std;
int lcs(char *x , char *y , int m , int n)
{
    int l[m+1][n+1];
    int i,j;
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0 || j==0)
            {
                l[i][j] =0;
            }
            else if(x[i-1]==y[j-1])
            {
                l[i][j] = l[i-1][j-1] + 1;
            }
            else
            {
                l[i][j] = max(l[i][j-1] , l[i-1][j]);
            }
        }
    }
    return l[m][n];
}
int main()
{
    char s1[100];
    char s2[100];
    cin>>s1>>s2;
    int m = strlen(s1);
    int n = strlen(s2);
    cout<<lcs(s1 , s2 , m , n)<<endl;
}