//============================================================================
// Name        : 13.3 Problem Set 3B
// Author      : Hakeem Buchanan
// Description : Problem Set 3B
//============================================================================
#include <iostream>
#include <iomanip>
using namespace std;
 int larger(int,int,int,int,int,int);

 struct Date {
 	int day1,month1,year1;
 	int day2,month2,year2;
 }d;
int larger(int day1,int month1,int year1, int day2, int month2,int year2)
{
	int value1=0;

	if (d.year1<d.year2)

		value1=1;

	else if (d.year2<d.year1)
		 value1=2;
		else if (d.year1==d.year2){
			if(d.month1<d.month2)
			value1=1;
			else if (d.month2<d.month1)
				value1=2;
				else if (d.month1==d.month2)
					{if(d.day1<d.day2)
								value1=1;
								else if (d.day2<d.day1)
									value1=2;
									else if (d.day1==d.day2)
									value1=3;}}
	return value1;
}



int main()
{
	int value1;
	cout<<"Enter the first Date MONTH THEN DAY THEN YEAR\n";
	cin>>d.month1;
	cin>>d.day1;
	cin>>d.year1;

	cout<<"Enter the second Date MONTH THEN DAY  THEN YEAR\n";
	cin>>d.month2;
	cin>>d.day2;
	cin>>d.year2;

		value1=larger(d.day1,d.month1,d.year1,d.day2,d.month2,d.year2);

		if (value1==1){
			cout<<"The first date is earlier: "<<d.month1<<"/"<<d.day1<<"/"<<d.year1;
		}
		else if (value1==2)
		{
			cout<<"The second date is earlier: "<<d.month2<<"/"<<d.day2<<"/"<<d.year2;
		}
		else if (value1==3)
		{
		   cout<<"The dates are the same: \nDate 1: "<<d.month1<<"/"<<d.day1<<"/"<<d.year1<<"\n Date 2:"<<d.month2<<"/"<<d.day2<<"/"<<d.year2;
		}
		return 0;

}




