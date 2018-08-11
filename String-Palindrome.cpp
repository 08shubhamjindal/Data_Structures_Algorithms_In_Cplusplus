// Monk introduces the concept of palindrome saying,"A palindrome is a sequence of characters which reads the same backward or forward."
// Now, since he loves things to be binary, he asks you to find whether the given string is palindrome or not. If a given string is palindrome, you need to state that it is even palindrome (palindrome with even length) or odd palindrome (palindrome with odd length).

// Input:
// The first line consists of T, denoting the number of test cases.
// Next follow T lines, each line consisting of a string of lowercase English alphabets.

// Output:
// For each string , you need to find whether it is palindrome or not.
// If it is not a palindrome, print NO.
// If it is a palindrome, print YES followed by a space; then print EVEN it is an even palindrome else print ODD.
// Output for each string should be in a separate line.
// See the sample output for clarification.

// SAMPLE INPUT

// 3
// abc
// abba
// aba

// SAMPLE OUTPUT

// NO
// YES EVEN
// YES ODD

// Explanation

// The first string is not a palindrome.
// The second and third strings are palindromes of even and odd lengths respectively.


#include<bits/stdc++.h>
using namespace std;
int main()
{  long long int n,i,j,q,flag=0;
    cin>>n;
    string s[n+1];
    for(i=0; i<n; i++)
    {
    cin>>s[i];
    q=s[i].length();
    if(q==1)
    {
       cout<<"YES"<<" "<<"ODD"<<endl;
    }
    else
    {
      for(j=0; j<s[i].length()/2; j++)
      {
          if(s[i][j]==s[i][q-1])
          {
              flag=1;
              q--;
          }
          else
          {
              flag=0;
              break;
          }
      }
      if(flag==1)
      {
          if(s[i].length()%2==0)
          {
              cout<<"YES"<<" "<<"EVEN"<<endl;
          }
          else
          {
              cout<<"YES"<<" "<<"ODD"<<endl;
          }
      }
      else
      {
          cout<<"NO"<<endl;
      }
    }
    }
    
}
