You have been given an array A of size N . you need to sort this array non-decreasing oder using bubble sort. However, you do not need to print the sorted array . You just need to print the number of swaps required to sort this array using bubble sort

Input Format

The first line consists of a single integer N denoting size of the array. The next line contains N space separated integers denoting the elements of the array.

Output Format Print the required answer in a single line


SAMPLE INPUT

5
1 2 3 4 5

SAMPLE OUTPUT

0

#include<bits/stdc++.h>
using namespace std;

int main()
{
int n; 
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int j,k,count=0; 
for(j=0;j<n-1;j++){
for(k=0;k<n-j-1;k++){
if(arr[k]>arr[k+1]){
int temp;
temp=arr[k];
arr[k]=arr[k+1];
arr[k+1]=temp;
count++;
}
}
}
printf("%d\n",count);
return 0;
}