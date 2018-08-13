#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string strr = "";
  std::getline(std::cin, str);
    int j=0,count=0;
    string  arr[100];
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]==' ')
        {
            arr[j] = strr;
            j++;
            strr = "";
            count++;
        }
        else if(i==str.length()-1)
        {
             arr[j] = strr;
             arr[j] = arr[j] + str[str.length()-1];
             count++;
            // j++;
            // strr = "";
        }
        else
        {
            strr = strr + str[i];
        }
    }
    for(int k=count-1; k>=0; k--)
    {
        cout<<arr[k]<<" ";
    }
}