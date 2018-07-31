// February Easy Challenge 2015 is underway. Hackerearth welcomes you all and hope that all you awesome coders have a great time. So without wasting much of the time let's begin the contest.

// Prime Numbers have always been one of the favourite topics for problem setters. For more information on them you can use see this link http://en.wikipedia.org/wiki/Prime_number .

// Aishwarya is a mathematics student at the Department of Mathematics and Computing, California. Her teacher recently gave her an intriguing assignment with only a single question. The question was to find out the minimum number of single digit prime numbers which when summed equals a given number X.

// Input:
// The first line contains T denoting the number of test cases. Each of the next T lines contains a single integer X.

// Output:
// Print the minimum number required. If it is not possible to obtain X using single digit prime numbers, output -1.

// Constraints:
// 1<=T<=100
// 1<=X<=10^6
// SAMPLE INPUT

// 4
// 7
// 10
// 14
// 11

// SAMPLE OUTPUT

// 1
// 2
// 2
// 3

// Explanation

// 10 can be represented as 7 + 3.

// 14 can be represented as 7+7

// 11 can be represented as 5+3+3.

#include <bits/stdc++.h>
using namespace std;
int dp[1000005];
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(0);
dp[1] = -1; dp[2] = 1; dp[3] = 1; dp[4] = 2;
dp[5] = 1; dp[6] = 2; dp[7] = 1; dp[8] = 2;
dp[9] = 2; dp[10] = 2;

for(int i=11;i<=1000002;++i)
{
dp[i] = min(dp[i-2]+1,min(dp[i-3]+1,min(dp[i-5]+1,dp[i-7]+1)));
}

int t; cin>>t;
while(t--)
{
int x; cin>>x;
cout<<dp[x]<<endl;
}
}

--------------------------------------------------------------------
    #include <iostream>
     
    using namespace std;
     
    int main(){
        int t, x, temp, result;
        cin >> t;
        while(t--){
            cin >> x;
            temp = x % 7;
            switch(temp){
            case 0:
                result = x / 7;
                break;
            case 1:
                temp = x % 5;
                switch(temp){
                case 0:
                    result = x / 5;
                    break;
                case 2:
                    result = x / 5 + 1;
                    break;
                case 3:
                    result = x / 5 + 1;
                    break;
                case 4:
                    result = x / 5 + 2;
                    break;
                }
            case 2:
                 result = x / 7 + 1;
                 break;
            case 3:
                result = x / 7 + 1;
                break;
            case 4:
                result = x / 7 + 2;
                break;
            case 5:
                result = x / 7 + 1;
                break;
            case 6:
                result = x / 7 + 2;
                break;
            }
            if(x == 1){
                cout << "-1" << endl;
            }
            else
            cout << result << endl;
        }
    }