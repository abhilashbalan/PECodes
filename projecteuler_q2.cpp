//correct answer 4613732
#include<iostream>
using namespace std;
int main()
{
	 long  i,first=0,second=0,sum=1,total=0,g=2;
	for(i=0;sum<4000000;i++)
	{
		first=second;
		second=sum;
		sum=first+second;
		if(sum%g==0)
		{
		total+=sum;
	    }
	    
	}
	cout<<"Sum is:"<<total;
	
return 1;
}
