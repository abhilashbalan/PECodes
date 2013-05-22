//Project Euler question 19
//Answer 171

#include <iostream>

using namespace std;
int main ()
{
	int year = 1900,day = 1,date = 1,month; //Declare everything
	int i,num = 0;
	int feb_date; //For changing february date according to leap year 
	while (year < 2001) //Loop from 1900 to 2001
	{
		month = 1; //January 1 1900 is a monday
		for (i = 1; i <= 12; i++) //Loop twelve months
		{
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) //If it contain 31 days..
			{
				for (date = 1; date <= 31 ;date++)
				{
					if (day > 7) //This part keeps the days of the week from going above 7
					 day = 1;
					if (date == 1 && day == 7 && year > 1900) //20th centuary  starts from 1901
					 num++;
					day++;
					
				}
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11) //30
			{
				for (date = 1; date <= 30; date++)
				{
					if (day > 7)
					 day = 1;
					if (date == 1 && day == 7 && year > 1900)
					 num++;
					day++;
					
				}
				
			}
			else if (i == 2) //February
			{
				if ( year%4 == 0)
				 feb_date = 29;
				else
				 feb_date = 28;
				
				for (date = 1; date <= feb_date; date++)
				{
					if (day > 7)
					 day = 1;
					if (date == 1 && day == 7 && year > 1900)
					 num++;
					 day++;
				}
				
			}
			month++; //Why is this thing here anyway??			
						
						
		}
		year++; //Increment year
			
	}
	cout<<num; //Print result
	return 0; //All done :)
}
