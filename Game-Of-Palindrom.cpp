// Palindrome is a string that reads the same backward as forward, e.g., madam.

// You are given a string whose length is even, and each character of the string is either 'a', 'b' or '/' Your task is to replace each occurrence of '/' in string with either 'a' or 'b' such that the string becomes a palindrome.

// You are also given two integers, aCost and bCost. Replacing '/' with 'a' costs aCost, and replacing '/' with 'b' costs bCost.

// Return the minimum cost of replacing '/' by 'a' and 'b' such that the string turns into a palindrome. If it is impossible to obtain a palindrome, return -1.

// Constraints

//     string will contain between 1 and 10000 characters, inclusive.
//     The length of string will be even.
//     Each character of the string will be either 'a' or 'b' or '/'.
//     aCost will be between 1 and 100, inclusive.
//     bCost will be between 1 and 100, inclusive.

// Input Format

// First line of input will contain the number of test cases. For each test case, there will be of three lines, the first line is the string whose palindrome is to be constructed, the second is the aCost and the third is the bCost

// Examples

// 1

// aba/bab/

// 4

// 6

// Returns: 10

// The only way to produce a palindrome is to replace 4th character of string with 'b' and 8th character with 'a'. The first replacement costs 4, the second costs 6, so the total cost is 4+6=10.

// aaaabbbb

// 12

// 34

// Returns: -1

// There is no '/' character, and string is not a palindrome. We have no way to change it into a palindrome.
// SAMPLE INPUT

// 1
// baba//aaa/ab//
// 72
// 23

// SAMPLE OUTPUT

// 213

#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t,i,j,flag=0, sum=0,acost , bcost;
    cin>>t;
    string s[t+1];
    for(i=0; i<t; i++)
    {
        cin>>s[i];
        cin>>acost>>bcost;
      long long int n=s[i].length();
        for(j=0; j<s[i].length()/2; j++)
        {
             if((s[i][j] =='/' && s[i][n-1]=='/'))
            {
                flag = 1;
                sum = sum + min(acost , bcost)*2;
                n--;
            }
            else if(s[i][j] == s[i][n-1])
            {
                flag=1;
                n--;
            }
            else if((s[i][j] == 'a' && s[i][n-1]=='/') ||(s[i][j] == '/' && s[i][n-1]=='a') )
            {
                flag = 1;
                sum = sum + acost;
                n--;
            }
            else if((s[i][j] == 'b' && s[i][n-1]=='/') || (s[i][j] == '/' && s[i][n-1]=='b'))
            {
                flag = 1;
                sum = sum + bcost;
                n--;
            }
         
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        sum=0;
    }
}