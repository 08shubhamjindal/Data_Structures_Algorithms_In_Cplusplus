#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,count=0;
    cin>>n;
    // long long int prime[n+1];
    bool prime[n+1];
    for(i=1; i<=n; i++)
    {
        prime[i] = true;
    }
    prime[1] = false;
    for(i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(j=i*i; j<=n; j = j+i)
            {
                prime[j] = false;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        if(prime[i]==true)
        {
            count++;
        }
    }
    cout<<count<<endl;
}