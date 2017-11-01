/*-------------------------------------------------------------------------------------------------------------------------------------
//Author: Hakeem S Buchanan
 * Problem Set 2: Problem 3

 --------------------------------------------------------------------------------------------------------------------------------------*/
#include <iomanip>
#include <iostream>
using namespace std;
// declaration section
class Date
{
 private:
 int month, day, year;
 public:
 Date(int = 7, int = 4, int = 2012);// constructor
 // constructor for converting from long to Date
  Date(long);
  void showDate();
  operator long();

 };
 // implementation section
 Date::Date(int mm, int dd, int yyyy) // constructor
 {
  month = mm;
  day = dd;
  year = yyyy;
 }
 // constructor for converting from long to Date
 Date::Date(long findate)
 {
  year = int(findate/10000.0);
  month = int((findate - year * 10000.0)/100.0);
  day = int(findate - year * 10000.0 - month * 100.0);
 }
 // member function to display a date
 void Date::showDate()
 {
  cout << setfill('0')
  << setw(2) << month << '/'
  << setw(2) << day << '/'
  << setw(2) << year % 100;
  return;
 }
 Date::operator long()
 {
	 int YP=0;
	 int MP=0;
	 int T=0;
	  if (month<=2)
	  {
		  MP=0;
		  YP=year-1;
	  }
	   else{
		  MP=int(0.4*month+2.3);
	  YP=year;
	   }
	  T=int(YP/4)-int(YP/100)+int(YP/400);
 	long yyyymmdd;
 	yyyymmdd =365*year+31*(month-1)+day+T-MP;
 	return (yyyymmdd);
 }
 int main()
 {
  Date a; // initialized by the default constructor
  Date b(1,31,2012); // initialize with a long integer
  Date c(3,16,2012); // initialize with the specified values
  long b_n,c_n;

  cout << "Dates a, b, and c are ";
  a.showDate();
  cout << ", ";
  b.showDate();
  cout << ", and ";
  c.showDate();
  cout << ".\n";
   // convert a long to a Date
  cout << "Date a is now ";
  a.showDate();
  cout << ".\n";
  b_n=long(b);
  c_n=long(c);
  cout << "Dates are:\n";
  cout<<b_n;
  cout<<"\n"<<c_n;

  return 0;
 }
