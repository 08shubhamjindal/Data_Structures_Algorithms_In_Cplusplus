// Pikachu has recently learnt a new move s . He knows he can work hard and convert it into a stronger move . Both the moves s and t contain the same number of letters.

// In a single day, Pikachu can increase any letter of move s by one, that is, in a single day, he can convert letter A to B , C to D, M to N  and so on. He can also convert letter Z to letter A.

// Pikachu just realized he also has a hidden ability. It can help him increase any letter of move s by 13 ,  that is, in a single day, he can convert letter A to letter N,B into O , M into Z , O into B and so on.  

// Now Pikachu wants to know the minimum number of days in which he can convert the move s
// into move t  ?
 

// Constraints:
// 1 <=|s| = |t|<=100000
// s and t consists of uppercase English letters only

// Input format:

// First line contains an integer n  , the length of strings s  and t
// Second line contains string s of length n
// Third line contains string t of length n

     

// Output format:

// Output single line containing the minimum number of days required

// SAMPLE INPUT

// 4
// ABCT
// PBDI

// SAMPLE OUTPUT

// 7

// Explanation

// Pikachu can convert move s into t in 7 days as follows:

// A->N(1st letter)
// N->O(1st letter)
// O->P(1st letter)
// C->D(3rd letter)
// T->G(4th letter)
// G->H(4th letter)
// H->I(4th letter)


    #include<bits/stdc++.h>
    using namespace std;

     
    int main()
     {
    	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    	int n,count=0;
    	cin>>n;
    	string s1,s2;
    	cin>>s1>>s2;
    for(int i=0;i<n;i++)
    	{
    	    if(s1[i]>s2[i])
    	    s2[i]+=26;
            count+=(s2[i]-s1[i])/13;
            count+=(s2[i]-s1[i])%13;
    	}
    	cout<<count;
    	return 0;
    }