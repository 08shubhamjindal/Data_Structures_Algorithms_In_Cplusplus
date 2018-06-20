#include<bits/stdc++.h>
using namespace std;
int getmid(int s ,int e)
{
    return s + (e-s)/2;
}
int constructs(int a[] , int ss , int se , int *st , int si)
{
    if(ss==se)
    {
        st[si]=a[ss];
        return a[ss];
    }
    int mid = getmid(ss,se);
    st[si] = constructs(a , ss ,mid , st , si*2+1) + constructs(a, mid+1 , se , st , si*2+2);
    return st[si];
}
int *constructst(int a[] ,int  n)
{
    int x = (int)(ceil(log2(n)));
    int max = 2*(int)pow(2,x)-1;
    int *st = new int[max];
    constructs(a , 0, n-1 , st , 0);
    return  st;
}
int getsums(int *st , int ss , int se , int querystart, int queryend , int si)
{
    if(querystart<=ss && queryend>=se)
    {
        return st[si];
    }
    if(se<querystart || ss > queryend)
    {
        return 0;
    }
    int mid = getmid(ss ,se);
    {
       return getsums(st, ss, mid , querystart , queryend , 2*si+1) + getsums(st,mid+1 , se, querystart , queryend , 2*si+2);
      
    }
}
int getsum(int *st , int n, int querystart , int queryend)
{
    if(querystart<0 || queryend>n-1 || querystart > queryend)
    {
       cout<<"invalid input"<<endl;
       return -1;
    }
    return getsums(st , 0 ,n-1 , querystart , queryend , 0);
}
int main()
{   int i,n,q,w;
    int a[500];
    cin>>n; 
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int *st = constructst(a, n);
    cout<<"enter the index you want to sum"<<endl;
    {
    cin>>q>>w;
    }
    cout<<"Sum is"<<getsum(st,n,q,w);
}


