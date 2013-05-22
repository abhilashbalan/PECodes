//Project Euler question 3
//Answer 6857

#include <iostream>

#define BIGNUM 600851475143  //The number to find the prime factor of

using namespace std;
void isprime (long long int num)//Function to check whether prime or not
{
	long long int i;
	int flag = 0;
	for(i = 2; i<=num/3; i++)// /3 or /2 ????
	{
		if(num%i == 0)
		 flag = 1;
	}
	if(flag == 0)
	 cout<<num<<endl;
}
int main()
{
	long long num;//Huuuuuuuge numbers are involved so use long long stuffz!
	long long int i;//Huuuge...
	for(i = 3; i < BIGNUM/2; i++)//This checks if a num is a factor of the BIGNUM and call function to check whether the factor is prime or not
	{
		if(BIGNUM%i == 0)
		{
			isprime(i);
		}
	} 
	
}
