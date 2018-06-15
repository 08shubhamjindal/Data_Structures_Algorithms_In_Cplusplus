// Divyansh has got very good mathematical skills and he loves to play with numbers. He is very fond of making tricky mathematical questions. One day he gave three numbers to his friend Atul and asked him to find the nth number which can be formed by using 2, 3 and 5.

// The starting numbers are: 2, 3, 5, 22, 23, 25, 32, 33, 35, 52...

// Your Input: 769

// Compile and Test can give Wrong Answer. Once you have written your answer, press Submit button to check your result.
// SAMPLE INPUT

// 999

// SAMPLE OUTPUT

// 535335

#include<bits/stdc++.h>
using namespace std;
int main()
    {
        long n;
        cin>>n;
        string s="";
        while(n)
        {
            switch(n%3)
            {
            case 0:
                s+="5";
                break;
            case 1:
                s+="2";
                break;
            case 2:
                s+="3";
                break;
            }
            n=(n-1)/3;
        }
        reverse(s.begin(),s.end());
        cout<<s;
    }