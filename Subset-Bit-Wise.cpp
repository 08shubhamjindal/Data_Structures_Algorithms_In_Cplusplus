Our friend Monk has decided to go on a diet in order to improve his Eating Habits. One of his friends told him that Monk should eat a fixed amount of Vitamins, Carbs, Fats and Proteins daily in order to loose weight. Monk wants to strictly follow this regime.

There are N fruits kept in Monk's Fridge. Each fruit contains a fixed amount of Vitamins, Carbs, Fats and Proteins. Now, Monk wants to know if upon selecting any subset of fruits from the fridge, the sum of their Vitamins, Carbs, Fats and Proteins is individually equal to their corresponding equivalent amount that Monk desires to eat. For example, if Monk selects Fruits i, j and k, then the sum of the vitamins of these 3 fruits should be equal to the amount of vitamins Monk wants to eat and so on for Carbs, Fats and Protiens as well.

If there exists such a subset to satisfy Monk's demands, print "YES"(without quotes), else print "NO"(without quotes).

Input Format:

The First line contains 4 space separated integers denoting the amount of Vitamins, Carbs, Fats and Protiens that Monk desires to eat. The next line contains a single integer N denoting the number of Fruits in Monk's Fridge. Each of the next N lines contains 4 space separated integers, where the i-th
line denotes the number of VItamins, Carbs, Fats and Proteins in the i-th fruit.

fruit.

Output Format:

Print the required answer on a single line
100 100 100 100
4
50 50 50 50
50 50 50 50
50 50 50 50
50 50 50 50

SAMPLE OUTPUT

YES

Explanation

Here, selecting any two pairs of fruits shall lead to satisfaction of Monk's demands.

#include<bits/stdc++.h>
using namespace std;
int i,j;

int main()
{
int v,c,p,f,n;
cin>>v>>c>>p>>f;
cin>>n;
int arr[n+1][4];

for(i=0; i<n; i++)
{
for(j=0; j<4; j++)
cin>>arr[i][j];
}
long power=pow(2,n);
i=0,j=0;
// rep(i,power)
for(i=0;i<power; i++)
{
int a=0,b=0,r=0,d=0;
// rep(j,n)
for(j=0; j<n; j++)
{
if(i&(1<<j)){
a+=arr[j][0];
b+=arr[j][1];
r+=arr[j][2];
d+=arr[j][3];
}
}
if(a==v && c==b && r==p && d==f ) {
cout<<"YES";
break;
}
}
if(i==power) cout<<"NO";

return 0;
}