You are given container full of water. Container can have limited amount of water. You also have N bottles to fill. You need to find the maximum numbers of bottles you can fill.

Input:
First line contains one integer, T, number of test cases.
First line of each test case contains two integer, N and X, number of bottles and capacity of the container.
Second line of each test case contains N space separated integers, capacities of bottles.

Output:
For each test case print the maximum number of bottles you can fill.

Constraints:



SAMPLE INPUT

1
5 10
8 5 4 3 2

SAMPLE OUTPUT

3






#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--) {
long long int n,x,num=0,current=0;
cin>>n>>x;
long long int arr[n];
for(int i = 0 ; i < n ; i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i = 0 ; i < n ; i++) {
     current+=arr[i];
    if(current > x){
    break;
}
    else{ 
     num++;
}
}
cout<<num<<endl;

}
}