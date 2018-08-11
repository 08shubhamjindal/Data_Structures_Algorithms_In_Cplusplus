#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      ll n;
      cin>>n;
       ll a[n+1];
       ll count=0,ans=0;
      for(ll i=1;i<=n;i++)
      {
        cin>>a[i];
      }
      // sort(a,a+n);
    sort(a+1,a+n+1);
    ll array[n+1];
    array[0]=0;
    array[1]=a[1];
    for(ll i=2;i<=n;i++)
    {
        array[i] = array[i-1] + a[i];
        // cout<<array[i];
    }
    for(ll i=n; i>2 && !count; i--)
    {
        for(ll j=n ; j>=i&&!count; j--)
        {
           if(a[j]<array[j-1]-array[j-i])
           {
               ans=i;
               // cout<<ans;
               count=1;
           }
        }
    }
   
        cout<<ans;
    
    return 0;
        
  #include <iostream>
#include<algorithm>
using namespace std;
#define ll long long int
int main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  ll n;
  cin >> n;
  ll a[n + 1],q[n+1];
  ll count = 0, ans = 0;
  for (ll i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
  // sort(a,a+n);
  sort(q+1 , q+n+1);
  sort (a + 1, a + n + 1);
  
  ll array[n + 1];
  array[0] = 0;

  array[1] = a[1];
  for (ll i = 2; i <= n; i++)
    {
      array[i] = array[i - 1] + a[i];
      // cout<<array[i];
    }
  for (ll i = n; i > 2 && !count; i--)
    {
      for (ll j = n; j >= i && !count; j--)
  {
    if (a[j] < array[j - 1] - array[j - i])
      {
        ans = i;
        // cout<<ans;
        count = 1;
      }
  }
    }
      printf("%d" , ans);
//   
  return 0;
}
