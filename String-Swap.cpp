// Sherlock and Watson are playing swapping game. Watson gives to Sherlock a string S on which he has performed K swaps. You need to help Sherlock in finding the original string.
// One swap on a string is performed in this way:

//     Assuming 1 indexing, the i'th letter from the end is inserted between i'th and (i+1)'th letter from the starting.

// For example, we have "contest". After one swap, it would change to "ctosnet". 

// Input:
// First line contains K, the number of swaps performed by Watson. Next line contains S, the string Watson gives to Sherlock.

// Output:
// You have to print in one line the original string with which Watson had started.

// Constraints:
// 1 ≤ K ≤ 109
// 3 ≤ Length(S) ≤ 1000
// All characters in S will be small English alphabets.
// SAMPLE INPUT

// 3
// hrrkhceaate

// SAMPLE OUTPUT

// hackerearth

// Explanation

// When swapping is done on "hackerearth" 3 times, it transforms to "hrrkhceaate".


    #include<bits/stdc++.h>
    using namespace std;
    #define lli long long int
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        lli temp;
        cin>>temp;
        string s;
        cin>>s;
        while(temp--)
        {
        string s1;
        vector<char>v1;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                s1=s1+s[i];
     
            }
            else
            {
                v1.push_back(s[i]);
            }
     
        }
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            s1=s1+v1[i];
        }
        s=s1;
        }
        cout<<s<<endl;
    }
