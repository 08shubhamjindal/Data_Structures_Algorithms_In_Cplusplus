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
   int  index = l[m][n];
   
   char lcs[index+1];
   lcs[index] = ' ';
   
    i = m ; j=n;
    while(i>0 &&  j>0)
    {
        if(x[i-1]==y[j-1])
        {
            lcs[index-1] = x[i-1];
            i--;
            j--;
            index--;
        }
        else if(l[i-1][j] > l[i][j-1])
        {
            i--;
        }
        else
        {
           j--; 
        }
    }
    cout<<lcs<<endl;
    
}
int main()
{
    char s1[100];
    char s2[100];
    cin>>s1>>s2;
    int m = strlen(s1);
    int n = strlen(s2);
    lcs(s1 , s2 , m , n);
    // cout<<lcs(s1 , s2 , m , n)<<endl;
}