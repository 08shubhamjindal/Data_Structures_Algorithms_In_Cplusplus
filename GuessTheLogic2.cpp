Two boys, Venky and Sagar, are at war over a girl, Riu. Driven by their feelings, they decided to confess to Riu. Since both of them were equally dumb, Riu decided that she would go out with that boy who would successfully find the pattern and thus prove that he is less dumb.

Read input until end of file.

Given : 0<=N<=10^18
SAMPLE INPUT

1
2
3
10
100

SAMPLE OUTPUT

1
2
3
11
121


#include<iostream>
using namespace std;

   long long solve(long long x)
   {
   if(x < 9)
   {
return x;
}
else
{
     return x%9 + 10*solve(x/9);
}
}

int main(){
long long x;
while(cin >> x){
cout << solve(x) << "\n";
}
return 0;
}
