Here is your task. You are given an array and you have to find the maximum possible length of subarray In that subarray a[i+1]%a[i]==0 Every element in subarray is divisible by its previous element Your task is to find maximum length of subarray.
INPUT
first line conatin number of test cases T. Each test case contain number of element in array N.Next line contain elements of array.
OUTPUT
print maximum length of subarray
Constraints
1<=T<=100 1<=N<=1000000 1<=a[i]<=1000000

SAMPLE INPUT

1
6
5 3 10 12 25 20

SAMPLE OUTPUT

3

Explanation

Subarray of maximum length conatins 5 10 20
    #include <iostream>
    #include<algorithm>
    using namespace std;
     
    int main()
    {
    	long long int n,t,i,j,ans;
    	
        cin>>t;
        while(t--)
        {
        	cin>>n;
            long long int a[n],l[n];	
        	for(i=0;i<n;i++)
        	{
        	cin>>a[i];
        	}
        	sort(a,a+n);
        	for(i=0;i<n;i++)
        	l[i]=1;
        	ans=0;
        	for(i=0;i<n;i++)
        	{
        		for(j=0;j<i;j++)
        		{
        			if(a[i]%a[j]==0)
        			 l[i] = l[i]>l[j]+1 ? l[i]:l[j]+1 ;
        	    }
        	    ans = ans>l[i] ? ans : l[i];
        	}
        	
        	cout<<ans<<endl;    
       }
        
        return 0;
    }