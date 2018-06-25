// As a beginner to the programming, Mishki came to Hackerearth platform, to become a better programmer. She solved some problems and felt very confident. Later being a fan of Hackerearth, she gave a problem to her friends to solve. They will be given a string containing only lower case characters (a-z), and they need to find that by using the characters of the given string, how many times they can print "hackerearth"(without quotes). As they are new to programming world, please help them.

// Input:
// The first line will consists of one integer N denoting the length of string.
// Next line will contain the string Str containing only lower case characters.

// Output:
// Print one integer, denoting the number of times her friends can print "hackerearth" (without quotes).


// Each character of string will be in range


// SAMPLE INPUT

// 13
// aahkcreeatrha

// SAMPLE OUTPUT

// 1

// Explanation

// Here by using the characters of string, her friends can print "hackerearth" (without quotes) only 1 time.
#include <iostream>
#include<string>
using namespace std;
int main()
{
long int n,m;
int s[7]={0};
char Str[1000000];
cin>>n;
cin>>Str;
for(int i=0;i<n;i++)
{
 if(Str[i]=='h') s[0]++;
 else if(Str[i]=='a') s[1]++;
 else if(Str[i]=='c') s[2]++; 
 else if(Str[i]=='k') s[3]++;
 else if(Str[i]=='e') s[4]++;
 else if(Str[i]=='r') s[5]++;
 else if(Str[i]=='t') s[6]++;
}
    s[0]/=2;
    s[1]/=2;
    s[4]/=2;
    s[5]/=2;
  m=s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6];
  for(int i=0;i<7;i++)
{
if(s[i]<m) m=s[i];
}
cout<<m;
return 0;
}