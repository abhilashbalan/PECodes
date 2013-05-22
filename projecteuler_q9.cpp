//Project Euler question 9
//Answer 31875000

#include <iostream>
#include <math.h>//Need sqrt


#define MAX_NUM 1000//Maximum number to check since the sum is 1000

using namespace std;
int is_perfect_square ( long k_square)//Function to check whether 'k_square' is a perfect square
{
	float k; 
	k = sqrt (k_square);
	int check = k;
	if ((k-check) != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}		
}

int main()
{
	long i,j;//Large numbers involved. So long
	long k_square;
	for (i = 2; i<MAX_NUM; i++)
	{
		for (j = 2; j<MAX_NUM; j++)
		{
			k_square = (i*i) + (j*j);//Equation c^2 = a^2 + b^2
			if (is_perfect_square( k_square ) == 1)//If k_square is perfect
			{
				if ((i+j+sqrt(k_square)) == 1000)//check whether their sum is 1000
				{
					cout<<"a="<<i<<" b="<<j<<" c square="<<k_square;//if yes then print them
					cout<<"\n\n"<<i*j*sqrt(k_square);
				}
			}
		}
	}
	return 0;
}
