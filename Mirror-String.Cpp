// On the way to Dandi March, Gandhijee carried a mirror with himself.
// When he reached Dandi, he decided to play a game with the tired people to give them some strength.
// At each turn of the game he pointed out a person and told him to say a number N(possibly huge) of his choice.
// The number was called lucky if that equals it's mirror image.

// Input:
// First line contains number of test cases T. Each test case contains a single integer N.

// Output:
// For each test case print "YES" if the number was lucky else print "NO" (quotes for clarity) in one line.

// Constraints:
// 1 ≤ T ≤ 100
// 0 ≤ N ≤ 10100

// SAMPLE INPUT

// 2
// 101
// 020

// SAMPLE OUTPUT

// YES
// NO

// Explanation

// For 1st case, as clear from the image "101" and it's mirror image are identical. Hence, output "YES". For 2nd case, "020" and it's mirror image are not identical. Hence output "NO".



#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long int n,i,j,t,flag=0,count=0;
    cin>>n;
    string s[n+1];
    for(i=0; i<n; i++)
    {

    cin>>s[i];
    count=0;
    for(j=0; j<s[i].length(); j++)
    {
        if(s[i][j]=='1' || s[i][j]=='0' || s[i][j]=='8')
        {
           count++;
        }
    }
    if(count==s[i].length())
    {
        t=s[i].length();
        for(j=0; j<s[i].length()/2; j++){
            
            if(s[i][j]==s[i][t-1])
            {
            t--;
            flag=1;
            }
    else{
        flag=0;
       break;
    }
        }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    }
    else
    {
          cout<<"NO"<<endl;
    }
}
}