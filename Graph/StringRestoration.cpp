#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int val=1,flag=1;
    string s="";
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        if(x>26)flag=0;
        if(flag&&(x==val||(x==val+1&&i!=1) ) ){
            if(x==val)
            s+='a';
            else
            s+=char(x+96); 
            val=x;
        }
        else{
            flag=0;
        }
    }
    if(flag)
    cout<<s<<endl;
    else cout<<-1<<endl;
    }
    return 0;
    
    
}