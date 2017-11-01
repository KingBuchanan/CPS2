//============================================================================
// Name        : Homework 11.4
// Author      : Hakeem Buchanan
// Description : Questions 4 and 7. Created classes Day of Week and is WeekDay to display different date values
//============================================================================

#include <iostream>
#include <iomanip> // needed for formatting
using namespace std;
// declaration section
class Date
{
 private:
 int month;
 int day;
 int year;
 public:
 Date(int mm = 1, int dd = 1, int yyyy = 2014) // inline constructor
 {month = mm; day = dd; year = yyyy;}
 void setDate(int mm, int dd, int yy) // inline mutator
 {month = mm; day = dd; year = yy;}
 void showDate(); // accessor
 bool isLeapYear();
 bool isWeekday(int,int,int);
 bool operator==(const Date&);
 int dayofWeek(int, int, int);
 void nextDay(int,int,int);
 };


int Date::dayofWeek(int mm,int yy, int dd){


	month=mm;
	year=yy;
	day=dd;

	if (mm<3){
	 mm=month+12;
	 yy=yy-1;
	}
	int century;
	century=int(yy/100);
	yy=yy%100;
	int t= dd+int(26*(mm+1)/10)+yy+int(yy/4)+int(century/4)-2*century;
	dd=t%7;
	if (dd<0)
	{
		dd=dd+7;
	}

	return dd;
}

bool Date::isWeekday(int dd,int mm,int yy ){
	int WY;
	bool day;

 WY=dayofWeek(dd,mm,yy);

// if (WY>0){
//	 day=true;
// }
// else
 if(WY>1){
	 day=true;
 }
 else
	 day=false;

cout<<"True/False : "<<day<<endl;
return day;
}
void Date::nextDay(int dd, int mm, int yy){
dd++;
if(dd>30){
	mm=mm+1;
	dd=01;
}
if (mm>12){
	yy=yy+1;
	mm=01;
}
day=dd;
month=mm;
year=yy;

}

void Date::showDate()
{
 cout << "The date is " << setfill('0')
 << setw(2) << month << '/'
 << setw(2) << day << '/'
 << setw(2) << year%100;
 // extract the last two year digits
 cout << endl;
}

int main(){

	Date a,b,c;
	a.isWeekday(03,2011,12);
	b.isWeekday(03,2011,15);
	b.nextDay(15,03,2015);
	b.showDate();
	c.nextDay(30,12,2011);
	c.showDate();
	return 0;

}



