// There is a frog initially placed at the origin of the coordinate plane. In exactly 1 second, the frog can either move up 1 unit, move right unit 1 , or stay still. In other words, from position (x,y), the frog can spend 1
// second to move to:
// (x+1 , y)
// (x,y+1)
// (x,y)

// After T seconds, a villager who sees the frog reports that the frog lies on or inside a square of side-length s with coordinates(x , y) , (x+s,y) , (x,y+s) , (x+s , y+s) . Calculate how many points with integer coordinates on or inside this square could be the frog's position after exactly T seconds.

// Input Format:

// The first and only line of input contains four space-separated integers: x,y ,s ,t and .

// Output Format:

// Print the number of points with integer coordinates that could be the frog's position after 

//  seconds.

// Constraints:
// 0<=x,y<=100
// 1<=s<=100
// 0<=t<400

// Note that the Expected Output Feature for Custom Invocation is not supported for this contest. 
// SAMPLE INPUT

// 2 2 3 6

// SAMPLE OUTPUT

// 6

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,s,t,i,j,x1,y1,count=0;
    cin>>x>>y>>s>>t;
    for(i=0; i<=s; i++)
    {
        for(j=0; j<=s; j++)
        {
            x1 = x+ i;
            y1 = y+ j;
            if(x1+y1 <=t )
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}