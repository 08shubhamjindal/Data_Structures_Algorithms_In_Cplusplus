// #include<bits/stdc++.h>
using namespace std;
int main()
{   long long int n,i,j;
    cin>>n;
    string a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    for(j=a[i].length()-1; j>=0; j--)
    {
        cout<<a[i][j];
    }
    cout<<"\n";
    }
}