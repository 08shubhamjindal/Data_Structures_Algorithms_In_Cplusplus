
// Program using STL(Standard Template Library)

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t, i,j,n1,n2,flag=0;;
    cin>>t;
    string  s1[t+1],s2[t+1];
    getline(cin,s1[0]);
    for(i=0; i<t; i++)
    {
     getline(cin,s1[i]);
     getline(cin,s2[i]);
     sort(s1[i].begin() , s1[i].end());
     sort(s2[i].begin() ,s2[i].end());
     n1 = s1[i].length();
     n2 = s2[i].length();
     if(n1!=n2)
     {
         flag=0;
         break;
     }
     else
     {
         for(j=0; j<n1; j++)
         {
             if(s1[i][j]!=s2[i][j])
             {
                flag=0;
                break;
             }
             else
             {
                flag=1;
             }
         }
     }
     if(flag==0)
     {
         cout<<" Strings are not anagram"<<endl;
     }
     else
     {
         cout<<" Strings are anagram"<<endl;
     }
    }
}

-----------------------------------------------------------------------------------------------------------------------------

// Program using quicksort

#include<bits/stdc++.h>
using namespace std;
int partition(string &s , int start , int end)
{
    char pivot = s[end];
    int pindex = start;
    for(int i= start ; i<end; i++)
        {
            if(s[i]<=pivot)
            {
                swap(s[i] , s[pindex]);
                pindex++;
            }
        }
        swap(s[pindex] ,s[end]);
        return pindex;
}
void quicksort(string &s , int start ,int end)
{
    if(start<end)
    {
        int pindex = partition(s,start ,end);
        quicksort(s,start ,pindex-1);
        quicksort(s,pindex+1,end);
    }
}
int main()
{ 
    int t, i,j,n1,n2,flag=0;;
    cin>>t;
    string  s1[t+1],s2[t+1];
    getline(cin,s1[0]);
    for(i=0; i<t; i++)
    {
     getline(cin,s1[i]);
     getline(cin,s2[i]);
     n1 = s1[i].length();
     n2 = s2[i].length();
       
  
    
     if(n1!=n2)
     {
         flag=0;
         break;
     }
     else
     {
          quicksort(s1[i],0,n1-1);
          quicksort(s2[i],0,n2-1);
         for(j=0; j<n1; j++)
         {
             if(s1[i][j]!=s2[i][j])
             {
                flag=0;
                break;
             }
             else
             {
                flag=1;
             }
         }
     }
     if(flag==0)
     {
         cout<<" Strings are not anagram"<<endl;
     }
     else
     {
         cout<<" Strings are anagram"<<endl;
     }
    }
}