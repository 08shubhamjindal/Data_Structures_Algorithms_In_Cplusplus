#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n,s;
    int  i, j, flag;
    cin>>n; 
    cin>>s;
    for (i = 0; i <= n.length() - s.length(); i++)
    {
        for (j = i; j <i + s.length(); j++)
        {
            flag = 1;
            if (n[j] != s[j - i])
            {
               flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
    cout<<"No"<<endl;
    }

}