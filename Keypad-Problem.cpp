Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : The order of strings are not important.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf

#include<bits/stdc++.h>
using namespace std;
 
char arr1[10][5] = {"", "", "abc", "def", "ghi", "jkl","mno", "pqrs", "tuv", "wxyz"};
void  print(int arr[], int y, char o[], int n)
{
    
    int i;
    if (y == n)
    {
        cout<<o<<endl;
        
        return ;
    }
    for (i=0; i<strlen(arr1[arr[y]]); i++)
    {
        o[y] = arr1[arr[y]][i];
        
        
                  print(arr, y+1, o, n); 
        
        if (arr[y] == 0 || arr[y] == 1)
        {
            return;
        }
    }
}
void fun(int arr[], int n)
{
    char r[n+1];
    r[n] ='\0';
    print(arr, 0, r, n);
}
int main(void)
{
    string s;
    cin>>s;
    int n = s.length();
    int arr[10];
    for(int i=0; i<s.length(); i++)
    {
        // cout<<s[i]<<endl;
        int x= s[i] - '0';
        arr[i]=x;
        // cout<<arr[i]<<endl;
    }
    fun(arr, n);
    return 0;
}