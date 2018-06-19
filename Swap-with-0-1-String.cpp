// Chef has a number D containing only digits 0's and 1's. He wants to make the number to have all the digits same. For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0. If it is possible to make all digits equal (either all 0's or all 1's) by flipping exactly 1 digit then output "Yes", else print "No" (quotes for clarity)
// Input

// The first line will contain an integer T representing the number of test cases.

// Each test case contain a number made of only digits 1's and 0's on newline
// Output

// Print T lines with a "Yes" or a "No", depending on whether its possible to make it all 0s or 1s or not. 
// Constraints
// Subtask #1: (40 points)

//     1 ≤ T ≤ 50
//     1 ≤ Length of the number D ≤ 50


// Subtask #2: (60 points)

//     1 ≤ T ≤ 10
//     1 ≤ Length of the number D ≤ 105

// Example

// Input:
// 2
// 101
// 11
// Output:
// Yes
// No

// Explanation

// Example case 1. In 101, the 0 can be flipped to make it all 1..

// Example case 2. No matter whichever digit you flip, you will not get the desired string.

#include<bits/stdc++.h>
using namespace std;
int main()
{   int i,j,t;
    string a[50];
    int count=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a[i];
        if(a[i][0]== '1')
        {
           for(j=1; j<a[i].length(); j++)
           {
               if(a[i][j]=='0')
               {
                   count++;
               }
           }
        }
        else if(a[i][0]== '0')
        {
           for(j=1; j<a[i].length(); j++)
           {
               if(a[i][j]=='1')
               {
                   count++;
               }
           }
        }
        if(count==1 || count == a[i].length()-1 || a[i].length()==1 )
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        count=0;
    }
    
}