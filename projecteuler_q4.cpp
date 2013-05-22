//Project Euler question #4 
//Answer::906609

#include<iostream>
using namespace std;
int ispallindrome(long num)
{
	long dup=num;
	long rev=0;
	while(num>0)
	{
		rev=(rev*10)+num%10;
		num/=10;
	}
	if(rev==dup)
	return 1;
	else
	return 0;
	
}
main()
{
	long i,j,product,big=0,factor1,factor2;
	for(i=100;i<=999;i++)
	{
		for(j=100;j<=999;j++)
		{
			product=i*j;
			if(ispallindrome(product))
			{
				if(product>big)
				{
				big=product;
				factor1=i;
				factor2=j;
			    }
			}
		}
	}
	cout<<"Pallindrome::"<<big<<" ##Factors:"<<factor1<<" "<<factor2;
}
