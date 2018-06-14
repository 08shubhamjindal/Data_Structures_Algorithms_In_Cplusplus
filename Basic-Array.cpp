// The road has N checkpoints. Each checkpoint has a beauty value denoted as an array A in order from the beginning of the road to the end of it. The beauty value of a checkpoint consists of the beauty of the places near the checkpoint. You are planning to travel down the road. As it is a long road, you will stop at one of the checkpoints for some rest and after this rest, continue your journey.

// Divide your journey into two sub-arrays, S1 being the checkpoints before your rest (including what you will stop) and S2 being the checkpoints after your rest, such that size (S1) + size (S2) = N (Ie every checkpoint belongs to an exact sub-array).
// The total beauty of the journey is defined by sum (S1) * sum (S2) where sum (S) is the sum total of the beauty value in sub-array S. You want to maximize sum value (S1) * sum(S2) ).

// Input:
// 5
// 1 2 3 4 5

// Sum (s1) * sum (s2) will be the maximum when s1 = [1,2,3] and s2 = [4,5]. Sum (s1) = 6 and sum (s2) = 9, then sum (s1) * sum (s2) = 54.



#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int t,i,j,sum1 ,sum,total,max=0;
   
    cin>>t;
 long long int a[t+1];
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<t; i++)
    {
        sum=0; sum1=0;
        for(j=0; j<=i; j++)
        {
           sum = sum+ a[j];
        }
        for(j=i+1;j<t;j++)
         {
          sum1=sum1+a[j];
         }
         total= sum*sum1;
         if(total>max)
         {
             max=total;
         }
         
    }
    cout<<max<<endl;
}