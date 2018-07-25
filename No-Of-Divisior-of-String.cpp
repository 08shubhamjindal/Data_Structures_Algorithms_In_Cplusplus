// A company follows a very annoying process of shortlisting applicants for a job. They calculate the value of the applicant's name by adding position of alphabet from 1-26 and then finding number of divisors for the name value. If the divisor number exceeds length or equal to length of name the person is IN, otherwise OUT.

// Input format No of test cases,* N*
// N names follow

// CONSTRAINTS

// 1<= Number of applicants <=100 0<length of name<30

// Sample Explanation
// test cases = 2
// Seeta

// IN
// (as 19+5+5+20+1 = 50 No of Divisors > length )


// Sita

// OUT
// (as 19+9+20+1=49 No of Divisors < length )


// Scoring-->
// count=Number of characters
// count < 75 --> *100
// *count < 180 --> *100 - (0.1 * count)
// *count < 480 --> *100 - (0.2 * count)
// *count >= 480 --> *10*
// SAMPLE INPUT

// 2
// Seeta
// Sita

// SAMPLE OUTPUT

// IN
// OUT

#include <bits/stdc++.h>
using namespace std;
int main(){int t,i;cin>>t;while(t--){string s;cin>>s;int sum=0,c=0;for(i=0;i<s.length();i++)sum+=((tolower(s[i])-'a')+1);for(i=1;i<=sum;i++)if(sum%i==0)c++;if(c>=s.length())cout<<"IN"<<endl;else
    cout<<"OUT"<<endl;}return 0;}

