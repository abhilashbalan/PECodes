//project euler question 7
//answer 104743


#include<iostream>
using namespace std;

int is_prime(int num)
{
	int i;
	for(i=2 ; i<=num/2 ; i++)
	{
		if(num%i == 0)
		{
			return 0;
		}
			
	}
	return 1;
}

int main()
{
	int count=1;
	long int num=3;
	cout<<2<<"-----1\n";
	while(count<10002)
	{
		if(is_prime(num))
		{
			count++;
			cout<<num<<"-----"<<count<<"\n";
			
		}
		num++;
	}
	return 0;
}
