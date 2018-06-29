// Given a string 'S' , u need to tell whether it is 'sumit's string or not'.

// A string is called 'Sumit's String' , if distance between adjacent character is 1.

// Consider that the alphabets are arranged in cyclic manner from 'a' to 'z'. distance between any character 'x' and 'y' will be defined as minimum number of steps it takes 'x' to reach 'y'. Here, character 'x' can start moving clockwise or anti-clockwise in order to reach at position where character 'y' is placed.

// Print 'YES' if it is Sumit's string else print 'NO', for each yest case.

// Input :

//     test cases, t
//     string , s

// Output:

// Desired O/p

// Constraints :

//     string length<=250
//     string has only lower case letters

// SAMPLE INPUT

// 3
// aba
// zza
// bcd

// SAMPLE OUTPUT

// YES
// NO
// YES

// Explanation

// Sample Case 1: 'aba' is a Sumit's string , since all the adjacent characters are exactly 1 unit of distance apart.

// Sample Case 2: 'zza' is not a Sumit's string since 'z' and 'z' are at the same position and hence 0 distance apart.
#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j,flag=0;
    cin>>n;
    string s[n+1];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i].length()==1)
        {
            flag=1;
        }
        else
        {
        for(j=0; j<s[i].length()-1; j++)
        {
            if(abs(int(s[i][j])-int(s[i][j+1]))==1 || s[i][j]=='a' && s[i][j+1] == 'z' || s[i][j]=='z' && s[i][j+1] == 'a')
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}