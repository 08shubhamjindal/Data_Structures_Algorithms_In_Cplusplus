// Due to the demonetization move, there is a long queue of people in front of ATMs. Due to withdrawal limit per person per day, people come in groups to withdraw money. Groups come one by one and line up behind the already present queue. The groups have a strange way of arranging themselves. In a particular group, the group members arrange themselves in increasing order of their height(not necessarily strictly increasing).

// Swapy observes a long queue standing in front of the ATM near his house. Being a curious kid, he wants to count the total number of groups present in the queue waiting to withdraw money. Since groups are standing behind each other, one cannot differentiate between different groups and the exact count cannot be given. Can you tell him the minimum number of groups that can be observed in the queue?
// Input format:

// The first line of input contains one positive integer N. The second line contains N space-separated integers

// denoting the height of i-th person. Each group has group members standing in increasing order of their height.
// Output format:

// Print the minimum number of groups that are at least present in the queue?
// Constraints:

// SAMPLE INPUT

// 4
// 1 2 3 4

// SAMPLE OUTPUT

// 1

#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,i,temp,group;
    cin>>n;
    int a[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    temp=a[0];
    group=1;
    for(i=1; i<n; i++)
    {
        if(temp > a[i])
        group++;
        temp = a[i];
    }
    cout<<group<<endl;
}