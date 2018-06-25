#include<bits/stdc++.h>
using namespace std;
 int partition(int *a , int start , int end)
    {
       int  pivot = a[end];
        int pindex = start;
        for(int i= start ; i<end; i++)
        {
            if(a[i]<=pivot)
            {
                swap(a[i] , a[pindex]);
                pindex++;
            }
        }
        swap(a[pindex] ,a[end]);
        return pindex;
    }
    int quicksort(int *a , int start , int end)
    {
        if(start < end)
        {
            int pindex = partition(a,start , end);
            quicksort(a,start ,pindex-1);
            quicksort(a,pindex+1 , end);
            
        }
    }
    int main()
    {  int i,n;
        cin>>n;
        int a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        quicksort(a,0,n-1);
        for(i=0;i<n; i++)
        {
            cout<<a[i]<<endl;
        }
    }