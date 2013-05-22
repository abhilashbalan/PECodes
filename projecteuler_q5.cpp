//Project Euler question #5
//Answer:232792560

#include<iostream>
using namespace std;
int isnotdivisible(long num)
{
	int i,flag;
	for(i=1;i<=20;i++)
	{
		if(num%i!=0)
		return 1;
		
	}
	return 0;
}
main()
{
	long num=10;
	while(isnotdivisible(num))
	{
		num++;
	}
	cout<<"Number::"<<num;
}

