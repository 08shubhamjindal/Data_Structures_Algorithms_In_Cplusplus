Vishi's birthday is on the door.
Anshuli and his friends are planning to give him a birthday party. For that Anshuli's friends want him to buy the cake. He needs to pay 'x' amount of money to buy the cake on the first day. After each day has passed, the cake becomes 'x' times the price that it was on the previous day. For buying the cake Anshuli has to collect money from all the friends and for that, he will need 'y' days and after 'y' days he will go and buy the cake.
Anshuli seeks your help in calculating the price of cake on the yth day.
Take the price as modulo 10^9 + 7 as the price can be very large.

Input Format
The first line contains an integer T, the number of testcases. It's followed by T lines.
Each testcase will contain two integers X & Y separated by a space.

Output Format
Output T lines, each corresponding to the answer of the testcase.

Constraints
1 <= T <= 10
1 <= X,Y <= 10100000
X % (109 + 7) != 0

Note
Both integers will have a maximum of 100000 digits.

Sample Input 1

3
9 3
3 3
7 4

Sample Output 1:

729
27
2401
 
SAMPLE INPUT

3
9 3
3 3
7 4

SAMPLE OUTPUT

729
27
2401





#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll power(ll x, ll y, ll p)
{
	ll res = 1; 
	x = x % p; 

	while (y > 0) {

		if (y & 1)
			res = (res * x) % p;

		y = y >> 1; 
		x = (x * x) % p;
	}
	return res;
}
int main()
{
     long long int j,t,a;
     string b;
     cin>>t;
     for(j=0; j<t; j++)
     {
         cin>>a;
         cin>>b;
	   ll remainderB = 0;
	 ll MOD = 1000000007;
	for (int i = 0; i < b.length(); i++)
	{
		remainderB = (remainderB * 10 + b[i] - '0') % (MOD - 1);
	}
	cout << power(a, remainderB, MOD) << endl;
     }
	return 0;
}
