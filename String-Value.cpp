#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,count=0,flag=0;
    cin>>t;
    string s[t+1];
    for(i=0; i<t; i++)
    {
        cin>>s[i];
      long long int   arr[s[i].length()+1];
    for(j=0; j<s[i].length(); j++)
    {
       for(k=0; k<s[i].length(); k++)
       {
           if(s[i][j]==s[i][k])
           {
               count++;
           }
           
       }
       arr[j] = count;
       count=0;
    }
     for(j=0; j<s[i].length(); j++)
    {
        if(arr[j]==int(s[i][j])-96)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
}