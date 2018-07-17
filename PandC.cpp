Little Jhool was was the most intelligent kid of his school. But he did NOT like his class teacher, his school, and the way he was taught things in school. Well, he was a rebel, to say the least. Like most of us, he hated being punished by his teacher - specially, when the punishment was to sit beside someone of the opposite gender. (Oh, he was a kid, come on!)

There are n number of students in the class, b being the number of boys, and g being the number of girls. Little Jhool decided to challenge his class teacher when she started punishing the entire class using the aforesaid mentioned punishment - making them sit in a straight line outside the class, beside someone of the opposite gender.

The challenge is as follows: Little Jhool selects a student from the class and make him or her sit outside the class. Then, his teacher picks another student from the remaining students, and makes him or her sit next in the line. Little Jhool and teacher then take alternate turns, until all the students of the class are seated.

If the number of pairs of neighboring students of the same gender is GREATER than the number of pairs of neighboring students of the opposite gender, output "Little Jhool wins!" , otherwise, "The teacher wins!"

Input format:
The first line contains, tc, the number of test cases. Following that, the next line contains n, the total number of students in the class. Then, in the next line, there are two integers, b and g representing the number of boys and girls in the class, respectively.

Output format:
You have to print "Little Jhool wins!" or "The teacher wins!" according to the condition.

Constraints:
1 <= t <= 50
1 <= n, b, g <= 100

PS: -> n = b + g
-> There will always be at least one boy and one girl in the class.
SAMPLE INPUT

2
4
3 1
3
2 1

SAMPLE OUTPUT

Little Jhool wins!
The teacher wins!

#include <iostream>
using namespace std;
int main()
{
int t,n,b,g;
cin>>t;
while(t--)
{
cin>>n;
cin>>b>>g;
// if(n==b+g)
// {
// if(g>0 && b>0)
// {
  if(b==g || abs(b-g)==1){
                cout<<"The teacher wins!"<<endl;
                    }
else
{
cout<<"Little Jhool wins!"<<endl;
}
}
// }
// }
return 0;
}