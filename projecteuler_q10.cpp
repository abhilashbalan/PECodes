//Project Euler question 10
//Answer 142913828922


#include <iostream>
#include <ctime>//For calculating the time used to compute(13 seconds for me!)
#include <cmath>

#define BIGNUM 2000000//Limit

using namespace std;
int isprime (long num)//Check whether prime
{
	long i;
	
	for(i = 2; i<=sqrt(num); i++)
	{
		if(num%i == 0)
		 return 0;
	}
	//cout<<num<<endl;
	return 1;
}
int main()
{
	clock_t start,end;//Clock,time variables
	long i;
	long long sum=0;
	start=clock();//Get current time
	for(i = 3; i < BIGNUM; i+=2)//Starts at 3, skips all even numbers since they cannot be primes
	{
		
		if(isprime(i))
		 sum+=i;
	}
	end=clock();//Get the time after finishing
	cout<<"sum:"<<sum+2<<endl<<"Time:"<<(end-start)/CLOCKS_PER_SEC<<" seconds/ ."<<(end-start)/1000<<" seconds";//end-start,Get time difference. Using like a stopwatch
	return 0;
	
}
