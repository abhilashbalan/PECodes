//Project Euler question #12 
//Answer::76576500

/*Triangular numbers are formed by adding every number before them.
 * Find the first triangular number that has more than 500 divisors.
 * Normal method to find the number of divisors will take too long.
 * Every number can be written as the product of prime numbers.
 * When a prime number is raised to power n, the number of divisors it will have is n+1.
 * So write the given triangular number as the product of prime numbers.
 * Then add 1 to the exponents of these prime numbers and then find their product.
 * This will be the numbers of divisors of that number.
 * This method is sooooooo fast!!
 * You may have to generate upto 5000 prime numbers.
 * Use the sqrt.
 */
 
 
 /*Time
  * Without sqrt  2040000.
  * With sqrt 570000(~ half a second!!!)
  * Almost 3 times faster!*/


#include <iostream>
#include <ctime>
#include <cmath>

#define MAX_DIVISOR 500 //Maximum number of divisors to find
#define NUM_PRIME 5000 //Number of prime numbers to generate

using namespace std;

long primelist[NUM_PRIME]; //List containing NUM_PRIME prime numbers
long prime_exponents[NUM_PRIME]; //List containing the exponents of those prime numbers

int is_prime(int num) //This guy finds whether a number is a prime or not
{
	int i;
	for(i=2 ; i<=sqrt(num) ; i++)
	{
		if(num%i == 0)
		{
			return 0;
		}
			
	}
	return 1;
}

void init_prime_array () //Initialize the array of primes
{
	
	int prime_count = 0;
	int i = 2;
	
	while (prime_count < NUM_PRIME)
	{
		if (is_prime (i))
		{
			primelist[prime_count] = i;
			
			prime_count++;
			
		}
		i++;
		
		
	}
	cout<<"Prime array initialised\n";
}

void write_expo_zero () //Write zeroes to exponent list
{
	int i;
	for (i = 0;i < NUM_PRIME; i++)
	 prime_exponents[i] = 0;
}

int find_divisors (long  num) //Find the divisors of num
{
	
	if (num == 0) //If its zero, then return 1
		{
		  
		  return 1;

		}
	long  dup = num; //Create a duplicate for num
	
	long divisor_prime = 0; //The prime number currently testing whether a divisor
	while (dup > 1) //While its greater than 1
	{
		divisor_prime = 0;
		while (divisor_prime < NUM_PRIME)
		{
			if (dup % primelist[divisor_prime] == 0) //Check prime divisors and find their exponents
			{
				prime_exponents[divisor_prime]++; //If its a divisor then increment its exponential value
				
				dup = dup/primelist[divisor_prime]; //Divide the number by that prime
				break;
			
			}
			else //otherwise, if the current prime is not a divisor
			{
			divisor_prime++; //move on to the next prime
			}
		}
	}
	int i;
	for (i = 0; i <= divisor_prime; i++) //Add 1 to the exponents
	{
		
	 prime_exponents[i]++;
	  
	  
	}
	int product = 1;
	for (i = 0; i <= divisor_prime; i++) //Find the product of the exponents
	{
	 product *= prime_exponents[i];
	
	}
	 
	return product; //Give it to main
	
	
}


int main ()
{
	
	long  tri_number = 3; // tri_number: Triangular number, numbers formed by adding every natural number before them
	long  i = 3;
	int num_divisors = 0;
	clock_t start,end;
	start = clock ();
	init_prime_array ();
	
	while (num_divisors <= MAX_DIVISOR) //Loop until we get MAX_DIVISOR
	{
		
		
		write_expo_zero (); //Write the exponent values to zero
		tri_number = tri_number+i; //Increase the triangular number
	
		i++;
		
		num_divisors = find_divisors (tri_number); //Find the number of divisors
		
	}
	end = clock ();
	cout<<"\nNumber "<<tri_number<<" Divisors "<<num_divisors<<" Time "<<(end-start);//1000000;
	return 0; //All good :)
	 
}
