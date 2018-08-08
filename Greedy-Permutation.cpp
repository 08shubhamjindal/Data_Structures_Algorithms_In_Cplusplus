// Kevin has a sequence of integers a1, a2, ..., an. Define the strength of the sequence to be

// |a1 - a2| + |a2 - a3| + ... + |an-1 - an| + |an - a1|.

// Kevin wants to make his sequence stronger, so he reorders his sequence into a new sequence b1, b2, ..., bn. He wants this new sequence to be as strong as possible. What is the largest possible strength of the resulting sequence?
// Input

// The input consists of 2 lines. The first line has a positive integer n. The second line contains the n integers a1, a2, ..., an.
// Output

// Output a single integer: the maximum possible strength.
// Constraints

// 1 <= n <= 105.

// |ai| <= 109. Note that ai can be negative.
// SAMPLE INPUT

// 4
// 1 2 4 8

// SAMPLE OUTPUT

// 18

// Explanation

// In the sample case, the original sequence is 1, 2, 4, 8. It's strength is |1-2| + |2-4| + |4-8| + |8-1| = 14. If Kevin reorders it as 1, 8, 2, 4, the new strength is |1-8| + |8-2| + |2-4| + |4-1| = 18. This is the greatest possible.



#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
int N;
cin>>N;
long long int arr[N];
for(int i=0;i<N;i++)
cin>>arr[i];
sort(arr,arr+N);
long long int answer=0;
long long int b[N];
for(int i=0,j=N-1,k=0;i<=j;i++,j--,k++)
{
if(i==j)
b[k]=arr[i];
else
{
b[k]=arr[i];
k++;
b[k]=arr[j];
}
}
for(int i=1;i<N;i++)
answer+=abs(b[i]-b[i-1]);
answer+=abs(b[N-1]-b[0]);
cout<<answer;
}

---------------------------------------------------------------------------------------------
#include <stdio.h>
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, h;
    long long int minsum=0;
    long long int maxsum=0;
    cin>>n;
    h=n/2;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<h;i++){
        minsum += a[i];
    }
    if(n%2==1){
        h++;
    }
    for(int i=h;i<n;i++){
        maxsum+=a[i];
    }
    cout<<2*(maxsum-minsum);
    return 0;
}