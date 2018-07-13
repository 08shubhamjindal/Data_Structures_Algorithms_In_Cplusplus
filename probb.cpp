#include<bits/stdc++.h>
using namespace std;
int inv(long long int arr1[], int n)
{
   int inv = 0;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if (arr1[i] > arr1[j])
      {
        inv++;
      }
    }
      }
  return inv;
}
unsigned int xorr(unsigned int n)
{
  unsigned int count = 0;
  while (n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}
int main()
{
    int n,k=0;
    string s,temp="";
    cin>>n;
    cin>>s;
    temp="";
    long long int arr[n+1];
    long long int arr1[n+1];
    memset(arr,0,sizeof(arr));
    memset(arr1,0,sizeof(arr1));
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
            for(int h=0; h<n; h++)
            {
            //   cout<<xorr(arr[h])<<endl;
                arr1[h] = xorr(arr[h]);
            }
           
           cout<<inv(arr1 , n);
            //  for(int h=0; h<n; h++)
            // {
          
            //     cout<<arr1[h]<<endl;
            // }
               
}