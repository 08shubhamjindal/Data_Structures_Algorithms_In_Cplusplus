#include<bits/stdc++.h>
using namespace std;
int printfraction(int nr , int dr)
{
    if(nr==0 || dr==0)
    {
        return 0;
    }
    if(nr%dr==0)
    {
        cout<<nr/dr<<" ";
        return 0;
    }
    if(dr%nr==0)
    {
        cout<<"1/"<<dr/nr<<" ";
        return 0;
    }
    if(nr>dr)
    {
        cout<<nr/dr<<" + ";
        printfraction(nr%dr , dr);
        return 0;
    }
    if(dr>nr)
    {
        int n = dr/nr + 1;
        cout<<"1/"<<n<<" + ";
        printfraction(nr*n-dr , dr*n);
        
    }
}
int main()
{
    int nr , dr;
    cin>>nr>>dr;
    printfraction(nr,dr);
}