// Milly is at the examination hall where she is reading a question paper. She checked the question paper and discovered that there are N questions in that paper. Each question has some score value. Ideally it's like questions requiring more time have more score value and strangely no two questions on the paper require same time to be solved.

// She is very excited by looking these questions. She decided to solve K questions while maximizing their score value. Could you please help Milly to determine the exact time she needs to solve the questions.
// Input

//     First line of input contains two space separated integers N and Q, where N is the number of questions available and Q is number of queries
//     Next line contains N space separated integers denoting the time Ti of N questions
//     Next line contains N space separated integers denoting the scores Si of N questions
//     Next Q lines contains a number K each, the number of questions she wants to solve

// Output

//     Print the time required for each query in a separate line.

// Constraints
// 1 <= N <= 105
// 1 <= Q <= 105
// 1 <= K <= N
// 1 <= Ti, Si <= 109

// SAMPLE INPUT

// 5 2
// 2 3 9 4 5
// 3 5 11 6 7
// 5
// 3

// SAMPLE OUTPUT

// 23
// 18

// Explanation

// For second query k = 3, Three most scoring questions are those with values 11, 7 and 6 and time required are 9, 5 and 4 respectively so the total total time required = 18.
#include<bits/stdc++.h>
using namespace std;
int partition(int *a , int *b , int start , int end)
{
    int pivot = a[end];
    int pindex = start;
    for(int i=start ; i<end ; i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i] ,a[pindex]);
            swap(b[i] ,b[pindex]);
            pindex++;
        }
    }
    swap(a[pindex], a[end]);
    swap(b[pindex] , b[end]);
    return pindex;
    
}

int quicksort(int *a , int *b , int start , int end)
{
    if(start < end)
    {
        int pindex = partition(a , b, start ,end);
        quicksort(a,b ,start , pindex-1);
        quicksort(a, b, pindex+1 , end);
    }
}
int main()
{
    int n,i,j,k,q,query,sum=0;

    cin>>n>>q;
        int a[n+1] , b[n+1];
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    quicksort(a,b,0,n-1);
    for(j=0; j<q; j++)
    {
        cin>>query;
        for(k=n-1; k>=(n-query); k--)
        {
            sum = sum + b[k];  
        }
        cout<<sum<<endl;
        sum= 0;
    }
  

}