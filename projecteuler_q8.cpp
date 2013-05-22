//Project Euler question #8
//Answer 40824

#include<fstream> //Fstream for file IO
#include<iostream> //IO
#include<cstdlib>

#define NUM_LEN 1000 //Length of the number
#define NUM_TO_MUL 5 //Number of numbers to multiply
#define FILENAME "cat.txt" //File which contains the number


using namespace std;

long find_product(int buf[])//This function computes the product of 5 numbers
{
	long product = 1;
	int i ;
	for(i=0; i<5; i++)
	 product *= buf[i];
	return product;
	
}
int main()
{
	int num[1001];//Stores the complete number
	int i;
	
	fstream file;//This is the file that stores the number
	file.open(FILENAME,ios::in);
		
	string ch;
	
	for(i=0; i<NUM_LEN; i++)//Read the number to the array 'num'
	{
		ch=file.get();
		num[i] = atoi(ch.c_str());
	}
	int buf[5];//Used for storing the 5 numbers which will be send to the function 'find_product'
	long product;//Should be of type long because 9^5 is 59049 :)
	int large = 0;//Store the largest number
	int j;
	for(i=0; i<NUM_LEN; i++)
	{
		buf[0] = num[i];//Starting point
		for(j=1; j<5; j++)//Get the next 5 numbers from Starting point
		{
			buf[j] = num[i+j];
		}
		product = find_product(buf);
		if(product > large)//Find the largest product 
		large = product;
		
	}
	cout<<large;//Print the largest product
	
	return 0;
	
}
