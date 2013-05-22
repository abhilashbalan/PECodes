//Project Euler question #14 
//Answer::837799

#include <iostream>

#define MAX_NUM 1000000

using namespace std;
struct max_len
{
	long int num;
	unsigned int len;
};

unsigned int find_len (long long num)
{
	long long dup = num;
	unsigned int len = 0;
	
	while (dup != 1)
	{
		
		if (dup%2 == 0)
		{
			dup/=2;
			len++;
		}
		else
		{
			dup = (3*dup)+1;
			len++;
		}
	}
	return len+1;
}


int main ()
{
	max_len len1;
	len1.num = 0;
	len1.len = 0;
	long long i;
	unsigned int len;
	for (i = 2; i < MAX_NUM; i++)
	{
		len = find_len (i);
		if (len > len1.len)
		{
		 len1.len = len;
		 len1.num = i;
		}
	}
	cout<<"\nNumber "<<len1.num<<" Length "<<len1.len;
	
	return 0;
	
}

