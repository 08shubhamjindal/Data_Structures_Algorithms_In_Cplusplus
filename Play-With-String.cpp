You are given a string S followed by two integers N1 and N2. You need to change the case of character at those two indices as specified by the two integers.

Input Format

First line contains the string S Second line contains two integers separated by single space

Output Format

It should print the string with case changed at those locations
SAMPLE INPUT

Jamia Hamdard
2 9

SAMPLE OUTPUT

JAmia HaMdard



#include <iostream>
#include <string.h>
int main()
{
char s[100];
int a,b,c=0,d=0;
gets(s);
cin>>a>>b;
if(s[a-1]>=65 && s[a-1]<=90)
{ 
    s[a-1]=s[a-1]+32;
c=1;
}
if(s[a-1]>=97 && s[a-1]<=122 && c==0)
s[a-1]=s[a-1]-32;

if(s[b-1]>=65 && s[b-1]<=90)
{
s[b-1]=s[b-1]+32;
d=1;
}
if(s[b-1]>=97 && s[b-1]<=122 && d==0)
s[b-1]=s[b-1]-32;

cout<<s;
return 0;
}
