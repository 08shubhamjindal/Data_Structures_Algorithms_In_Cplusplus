// Little Monk has N number of toys, where each toy has some width Wi. Little Monk wants to arrange them in a pyramdical way with two simple conditions in his mind. The first being that the total width of the ith row should be less than (i+1)th row. The second being that the total number of toys in the ith row should be less than (i+1)th row. Help Monk find the maximum height which is possible to be attained!

// Note: It is NOT necessary to use all the boxes.

// Input format:
// The first line contains an integer N, which denotes the number of Monk's toys. The next line contains N integers each denoting the width of the Monk's every single toy.

// Output format:
// Print the maximum height of the toy pyramid.

// Constraints:
// 1 ≤ N ≤ 10^6

// 1 ≤ Ni ≤10^9

// SAMPLE INPUT

// 4
// 40 100 20 30

// SAMPLE OUTPUT

// 2

// Explanation

// On the lowest level, we can place 20
// and 100 , and on top of it we can place 40, so the maximum height would be 2.
 #include <bits/stdc++.h>
using namespace std;
long long a[1000006];
int main()
{
int n; cin>>n;
for(int i=0;i<n;++i)
cin>>a[i];

sort(a,a+n);
int r=1;
for(int i=1;i<=n;++i)
{
long long y = (i*(i+1))/2;
if(y<n)
{
r = i;
}
else
{
break;
}
}
cout<<r<<endl;
}