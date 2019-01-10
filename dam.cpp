#include<bits/stdc++.h>
using namespace std;

void util_function(int d,string program)
{
	int len=program.length();
	
	int count=0;
	

	
	map<int,double> m;
	
	double total_damage=0;
	
	double initial=1;
	
	for(int i=0;i<len;i++)
	{
		if(program[i]=='K')
		{
			m[i]=initial;
			total_damage+=initial;
		}
		
		else if(program[i]=='M')
			initial*=3;
		
		else
			initial/=2;
	}
	
	if(total_damage<=d)
	{
		cout<<count;
		return;
	}
	
	bool ispossible=true;
	
	while(count<=len and ispossible)
	{
		ispossible=false;
		
		for(int i=0;i<len-1 and count<=len;i++)
		{
			if(program[i]=='M' and program[i+1]=='K')//case MK
			{
				//decrease the value of the total_damage 
				double temp=m[i+1];
				total_damage-=temp;
				temp/=3;
				total_damage+=temp;
				
				//remove the index from the map and insert new index
				m.erase(i+1);
				m[i]=temp;
				
				//swap the values MK
				swap(program[i],program[i+1]);
				count++;
			}
			
			else if(program[i]=='K' and program[i+1]=='S')//case KS
			{
				double temp=m[i];
				total_damage-=temp/2;
				
				m.erase(i);
				m[i+1]=temp/2;
				
				swap(program[i],program[i+1]);
				count++;
			}
			
			if(total_damage<=d)
			{
				cout<<count;
				return;
			}
			
			if((program[i]=='K' and program[i+1]=='S')or(program[i]=='M' and program[i+1]=='K'))
				ispossible=true;
		}
	}
	
	if(total_damage>d)
		cout<<"IMPOSSIBLE";
	return;
}
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int d;
		string program;
		
		cin>>d>>program;
		util_function(d,program);
	}
}