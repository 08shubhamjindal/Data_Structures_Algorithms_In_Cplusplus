Edward is playing a simplified version of game called "Dorsplen". This game is played with gems of three different colors: red, green and blue. Initially player has no gem and there are infinitely many gems of each color on the table.

On each turn a player can either acquire gems or buy an artifact. Artifact can be bought using gems. On acquiring gems player can get three gems of distinct colors or two gems of the same color from the table.

Edward is planning to buy an artifact, it costs r red gems, g green gems and b blue gems. Compute, what is the minimum number of turns Edward has to make to earn at least r red gems, g green gems and b blue gems, so that he will be able to buy the artifact.

Input format

Input contains three integers in a single line r, g and b — the number of red, green and blue gems, respectively, required to buy the artifact.

Constraints

Output format

Output single integer: the minimum number of turns Edward has to make to be able to buy the artifact.
SAMPLE INPUT

4 5 8

SAMPLE OUTPUT

7

 Explanation

Edward has to get two blue gems and then each of the next six turns get one of each red, green and blue gems.

Edward will end with 6 red gems, 6 green gems and 8 blue gems, which is enough to buy the artifact.


#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int a[3],ans,t1,t2;
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
     ans=a[1];
       t1=a[2]-a[1];
     if(t1%2==0)
   {
    t2=t1/2;
    }
    else{
     t2=t1/2+1;
      }
cout<<ans+t2<<endl;

return 0;
}