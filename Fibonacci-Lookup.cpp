#include<bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100
int lookup[MAX];
void intial()
{
    for(int i =0 ; i<MAX; i++)
    {
        lookup[i] = NIL;
    }
}
int fab(int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
        {
            lookup[n] = n;
        }
        else
        {
            lookup[n] =  fab(n-1) + fab(n-2);
        }
    }
    else
    {
        return lookup[n];
    }
}

int main()
{
    int n;
    cin>>n;
    intial();
    cout<<fab(n)<<endl;
}