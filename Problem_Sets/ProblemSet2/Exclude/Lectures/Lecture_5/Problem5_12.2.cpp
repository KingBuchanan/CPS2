/*-------------------------------------------------------------------------------------------------------------------------------------
//Author: Hakeem S Buchanan
 * Problem Set 2: Problem 5
 * Copy and Run Program 12.1
 --------------------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

using namespace std;

class Julian;

class Date
{
private:
	int month;
	int day;
	long year;
public:
	Date(int=7,int=4,long=2010);
	operator Julian();
	void getdate();

};

class Julian
{
private:
	long p;
public:
	Julian(long=0);
	void showdate();

};
Date::operator Julian()
		{
	int MP,YP;
	   long T,JD;

	   if(month<=2)
	   {MP=0;
	   YP=year-1;
	   }
	   else
	   {
		   MP=int(.4*month+2.3);
		   YP=year;
	   }
	   T=int(YP/4)-int(YP/100)+int(YP/400);
	   JD=365*year+31*(month-1)+day+T-MP;
	   return(Julian(JD));
	   }

void Julian::showdate() {
	cout<<"\nJulian Date is "<<p;
	}

Julian::Julian(long jdate)
		{
			p=jdate;
		}
Date::Date(int m, int d, long y)
{
	month=m;
	day=d;
	year=y;

}

void Date::getdate()
{
	cout<<" Enter month\n"<<endl;
	cin >>month;
	cout<<"Enter Day\n"<<endl;
	cin>> day;
	cout<< "Enter Year"<<endl;
	cin>>year;
}
int main()
{
	Date g;
	Julian X;
	cout<<"Date(mm/dd/yy)\n"<<endl;
	g.getdate();
	X=Julian(g);
	X.showdate();
	system("pause");
	return 0;
}

