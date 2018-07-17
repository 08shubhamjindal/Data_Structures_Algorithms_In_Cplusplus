// Its Roy's birthday and he is decorating his house with balloons.
// He has 26 different types of balloons. They are represented by [a-z].

// Now Roy does not want to have few particular balloons together. Actually he doesn't want to keep any of the two vowel (i.e [a,e,i,o,u] ) balloons together.
// So, in one arrangement no two vowels should be together. Given the string of balloons there can be many such arrangements possible.
// Help Roy in finding the number of possible arrangements.

// Number of such arrangements can be quite large, so print it modulo 1000000007 (109 + 7)
// Also, there's a chance that no such arrangement is possible. Print "-1" in such cases (without quotes)

// Input:
// First line contains T, number of test cases.
// Each of next T lines contains a string composed of lower case letters representing all the balloons.

// Output:
// For each test case print the required answer.

// Constraints:
// 1 <= T <= 100
// 1 <= Length of string <= 1000000 (106)

// Note: Sum of string lengths over all the test cases in one file does not exceed 1000000 (106)
// SAMPLE INPUT

// 2
// abe
// ae

// SAMPLE OUTPUT

// 2
// -1

// Explanation

// Test #1: Possible arrangements are [1] abe [2] eba

// Test #2: There are no any arrangements possible such that any two vowels are not together. So print -1.


#include<bits/stdc++.h>
using namespace std;
unsigned int factorial(unsigned int n)
{
    if (n == 0)
      return 1;
    return n*factorial(n-1);
}
int nCrModp(int n, int r, int p)
{
    int C[r+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}
int main()
{
  int t,i,k,j,cons,count=0;
    cin>>t;
    int p =1000000009;
    string s[t+1],s1[t+1];
    for(i=0; i<t; i++)
    {
        cin>>s[i];
          k=0;
        for(j=0; j<s[i].length(); j++)
        {
            if(s[i][j]=='a' || s[i][j]=='o'|| s[i][j]=='i' || s[i][j]=='e' || s[i][j]=='u' )
            {
                count++;
            }
        }
        cons = s[i].length() - count;
            //  nCrModp(cons+1, count, p);
            //  factorial(cons);
            //  factorial(count);
    cout<<nCrModp(cons+1, count, p)* factorial(cons)*factorial(count)<<endl;
        
    }
    
}
-----------------------------------------------------------------------------------------------------------
One More Way to Find No Vowels Together Without Using Combination
#include<bits/stdc++.h>
using namespace std;
unsigned int factorial(unsigned int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}
int main()
{
  int t,i,k,j,cons,count=0;
    cin>>t;
    int p =1000000009;
    string s[t+1],s1[t+1];
    for(i=0; i<t; i++)
    {
        cin>>s[i];
          k=0;
        for(j=0; j<s[i].length(); j++)
        {
            if(s[i][j]=='a' || s[i][j]=='o'|| s[i][j]=='i' || s[i][j]=='e' || s[i][j]=='u' )
            {
                count++;
            }
        }
        cons = s[i].length() - count;
        int x = factorial(cons+1)%p;
        int y = factorial(count)%p;
        int z = factorial(cons+1-count)%p;
        int b = factorial(cons)%p;
       
         cout<< ((x/(z*y))%p)*(b%p)*(y%p)<<endl;
        
    }
    
}