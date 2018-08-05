// Disappointed and Disheartened Mike is really tired of jail life, and needs to take his mind off all this. Mike's roomate and good friend Kevin decidedes to help him, and tells him to try the following task:

// Given a string S consisting of lowercase English alphabets of size N, can you find the lexicographically maximum substring of this string ? Mike has no knowledge what so ever of strings, and needs your help. Can you help Mike and improve his mood?

// Input Format :

// The first line contains a single integer N denoting the length of string S. The next line contains the string S.

// Output Format :

// Print the lexicographically maximum substring of String S on a single line.

// Constraints :
// 1<=N<=5000

// SAMPLE INPUT

// 6
// ababaa

// SAMPLE OUTPUT

// babaa

// Explanation

// Lexicographically maximum string of the given string is babaa.



    #include<bits/stdc++.h>
    
    // #define MOD 1000000007
    using namespace std;
    int main()
    { 
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
    long long n;
        string s,mx="";
        cin>>n;
        cin>>s;
        for(long long i=0;i<n-1;i++)
        {
            mx=max(mx,s.substr(i));
        }
        cout<<mx<<"\n";
    }