// Little Monk as usual has not prepared for his exams. So, to ensure that he does not fail in any course, he goes to the library and picks up N books for his N courses that he has to give exams for. The number of books being too large, he puts them on different tables and goes to a particular table whenever he wants to read that particular book.

// After he is done with studying, he has to put all the books back in their place. He finds that there are exactly N empty spaces in the book shelf where he can put his N books.

// Imagine shelves and tables where books are kept, as locations on the x-coordinate axis. Now Little Monk wants to minimize the time he takes to put books back in shelves. He takes T units of time to put a book back in a shelf, where T denotes the distance between the book and the shelf it was put in.

// Once Little Monk puts a book into a shelf, he takes 0 unit time to reach the next book he wants to put into a shelf. Since he is dumb, and in a hurry, help him calculate the minimum time required to put all the books in shelves.

// Note: Once a book has been into a shelf, you can't put another book in the same shelf. Also, initially Monk can start from any book.

// Input format:
// The first line contains a pair of integers: an integer N, which denotes the number of books and empty shelves. Next line contains N space separated integers denoting co-ordinates of the tables where books are placed. Next line contains N space separated integers denoting co-ordinates of shelves.

// Output format:
// Print minimal time it will take Little Monk to put all books back in shelves.



// SAMPLE INPUT

// 3
// 2 1 3
// 4 3 2

// SAMPLE OUTPUT

// 3

//  Explanation

// Given co-ordinates of books and empty shelves, one of the possible combinations, where monk would incur minimal time is:

// Book at co-ordinate 2 goes to shelf at co-ordinate 2.
// Book at co-ordinate 1 goes to shelf at co-ordinate 3.
// Book at co-ordinate 3 goes to shelf at co-ordinate 4.
// Total time taken = 0 (2-2) + 2 (3-1) + 1 (4-3) = 3.



#include<bits/stdc++.h>
using namespace std;
int arr[1000000],arr1[1000000];
int main()
{
int n,i;
long long int sum=0;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&arr[i]);
}
sort(arr,arr+n);
for(i=0;i<=n-1;i++)
{
scanf("%d",&arr1[i]);
}
sort(arr1,arr1+n);
for(i=0;i<=n-1;i++)
{
if(arr[i]-arr1[i]>0)
{
sum+=arr[i]-arr1[i];
}
else
{
sum+=arr1[i]-arr[i];
}
}
printf("%lld",sum);
return 0;
}