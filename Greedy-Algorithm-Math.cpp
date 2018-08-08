One day Benny came up with an excellent idea to become a business-pig! She knows that almost everyone likes candies.

Benny knows about that somewhere on the Earth candy-stock exists. She knows that at the i-th of n days she can buy or sell sweet called "Korovka", if she wants. The price for buying or selling the sweet at the i-th day equals to c[i].

Unfortunately, Benny is not allowed to have more than one candy at some moment of time according to candy-stock rules. She firstly has to sell the candy and then may buy the new one.

Please, note, that at one day Benny could firstly sell the candy and then buy the new one.

From the beginning she has a vary big budget. Benny wants to make the maximal possible profit in case of making such business for n consecutive days and not breaking any candy-stock rules.

Array c is generated in the following way:

x[0] = 0 ,  x[i] = ((x[i-1]mod M).a + b)mod2^32
c(i) = floor(x[i]/256)

Input format

The first line contains two integers: n and M.

The second line contains two integers: a and b.

Constraints
2<=N<=10^7
1<=M<=2^30
1<=A,B<=10^9
Output format

In a single line output the maximum profit Benny can get.
SAMPLE INPUT

5 100500
1 1024

SAMPLE OUTPUT

16

Explanation

The array c will look like {4, 8, 12, 16, 20}. Let B be buy and S be sale.

B — SB — SB — SB — S.

If you use the strategy above you will get the maximum profit.

    #include<iostream>
    #define MAX 4294967296
    using namespace std;
    int main(void)
    {
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,a,b,i,tot=0;
    cin>>n>>m;
    cin>>a>>b;
    long long int x[n],c[n];
    x[0]=0;
    for(i=0;i<n;i++)
      {
        if(i==0)
        {
          x[i]=((((0 % m))*a)+b)%MAX;
        }
          else
          {
        x[i]=((((x[i-1] % m))*a)+b)%MAX;
          }
        c[i]=x[i]/256;
      }
      for(i=0;i<n-1;i++)
        {
          if(c[i+1]-c[i]>0)
            tot+=c[i+1]-c[i];
        }
        cout<<tot;
      return 0;
    }