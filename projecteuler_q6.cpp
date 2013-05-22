//Project euler question #6
//Answer::25164150

#include<iostream>
#include<math.h>

#define limit 100
using namespace std;
class diff
{
	long sum_of_squares,square_of_sum;
	long i,j,sum;;
	public:
	void find_square_of_sum();
	void find_sum_of_squares();
	void display();
	
};
void diff::find_square_of_sum()
{
	sum=0;
	for(i=1;i<=limit;i++)
	{
		sum+=i;
	}
	square_of_sum=pow(sum,2);
}
void diff::find_sum_of_squares()
{
	sum=0;
	for(i=1;i<=limit;i++)
	{
		sum+=pow(i,2);
	}
	sum_of_squares=sum;
}
void diff::display()
{
	cout<<"Sum of squares::"<<sum_of_squares<<endl;
	cout<<"Square of sums::"<<square_of_sum<<endl;
	cout<<"Difference::"<<square_of_sum-sum_of_squares;
	
}

 main()
{
	diff d;
	d.find_square_of_sum();
	d.find_sum_of_squares();
	d.display();
}
