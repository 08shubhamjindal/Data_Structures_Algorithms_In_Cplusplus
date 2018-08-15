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
-------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1 , str2;
    int i,j,k,flag=0;
    getline(std::cin, str1);
    getline(std::cin, str2);
    for(i=0; i<str1.length(); i++)
    {
        if(str2[0]==str1[i])
        {
            k=1;
            for(j=i+1; j<i+str2.length(); j++)
            {
                if(str2[k]==str1[j] && k<str2.length())
                {
                    flag=1;
                    k++;
                }
                else
                {
                    flag=0;
                    k=1;
                    break;
                }
            }
        }
    }
    if(flag==1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}