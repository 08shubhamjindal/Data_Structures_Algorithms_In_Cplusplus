#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,m,k=0;
     long long arr1[2];
     memset(arr1,0,sizeof(arr1));
      string s,temp="";
      cin>>s;
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]==44)
        {
            
            for(int j=0;j<(int)temp.size();j++)
              arr1[k]=arr1[k]*10+(temp[j]-'0'); 
            
            temp="";
            k++;
        }
        else temp+=s[i];
    }
   for(int j=0;j<(int)temp.size();j++)
      arr1[k]=arr1[k]*10+(temp[j]-'0'); 
    n=arr1[0];
    m=arr1[1];
 
      cin>>s;
    temp="";
    long long int arr[n+1];
    memset(arr,0,sizeof(arr));
    k=0;
    
    
    
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]==44)
        {
            
            for(int j=0;j<(int)temp.size();j++)
              arr[k]=arr[k]*10+(temp[j]-'0'); 
            
            temp="";
            k++;
        }
        else temp+=s[i];
    }
   for(int j=0;j<(int)temp.size();j++)
               arr[k]=arr[k]*10+(temp[j]-'0'); 
  
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                // cout<<i+1<<j+1<<k+1<<endl;
                sum = arr[i] + arr[j] + arr[k];
                // cout<<sum<<endl;
                if(sum%m==0)
                {
                    count++;
                }
                sum=0;
            }
        }
    }
    cout<<count<<endl;
}