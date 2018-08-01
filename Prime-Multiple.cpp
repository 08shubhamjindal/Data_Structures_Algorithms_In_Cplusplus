shu is very fond of Prime numbers and he like challenging his friends by giving them various problems based on Mathematics and Prime number. One of his friend Harshit is jealous and challenges him to solve a task. Task is :
Given a prime number X, you need to give the count of all numbers in range 1 to 106 inclusive which have minimum prime factor X.
Help Ashu in solving this task.

Input:
First line consist of numer of test cases T.
Each test case contains a single number X.

Output:
Output for each test case count of all numbers in range 1 to 106 inclusive which have minimum prime factor X.

Constraints:
1 ≤ T ≤ 105
Prime number X where 2 ≤ X ≤ 106
SAMPLE INPUT

2
2
11

SAMPLE OUTPUT

500000
20779

Explanation

The minimum prime factor of all even numbers in the range [2, 1000000] is 2, and there are 1000000/2 = 500000 such even numbers.
The numbers with minimum prime factor as 11 are: 11, 121, 143, ...





#include<bits/stdc++.h>
using namespace std;
int lp[1000001]={0};
int c[1000001]={0};
void lowestprime()
{
int i,j;
for(i=2;i<=1000000;i++)
{
if(lp[i]==0)
{
for(j=i;j<=1000000;j=j+i)
{
if(lp[j]==0)
lp[j]=i;
}
}
}
for(i=0;i<=1000000;i++)
c[lp[i]]++;
c[0]=c[1]=0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
lowestprime();
int t;
cin>>t;
while(t--)
{
int x;
cin>>x;
cout<<c[x]<<endl;
}
return 0;
}
---------------------------------------------------------------------------------------------------------------

    #include<bits/stdc++.h>
     
    using namespace std;
     
    long long int n=1000001;
    long long int prime[1000001]={0};
     
    void find(){
      
        for(long long int p=2;p*p <1000001;p++){
            if(prime[p]==0){
                for(long long int i=p*2;i<1000001;i+=p){
                    if(prime[i]==0){
                        prime[p]+=1;
                        prime[i]=1;
                    }
                }
            }
        }
    }
    int main(){
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        long long int t;
        cin >> t;
        for(long long int l=0;l<t;l++){
            long long int x;
            cin >> x;
            find();
            cout << prime[x]+1<<endl;
            
        }
    }