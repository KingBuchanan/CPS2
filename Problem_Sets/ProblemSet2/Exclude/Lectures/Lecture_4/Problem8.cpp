/*-------------------------------------------------------------------------------------------------------------------------------------
//Author: Hakeem S Buchanan
 * Problem Set 2: Problem 8
 * Create a Time program that displays the user inputted time as hrs:mins:secs. Program works to Specifications
 --------------------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
	private:
		int hours, mins, seconds;

	public:
		Time(int h=12, int m= 59, int s=59) //Default time of 12:59:59
		{ hours = h; mins = m; seconds = s; };

		void showTime();

		friend istream& operator>>(istream&, Time&);

		friend ostream& operator<<(ostream&, const Time&);

		operator long();
};
//
//void Time::showTime()
//{
//	cout << setfill('0');
//	cout << setw(2) << hours << ':' << setw(2) << mins << ':' << setw(2) << seconds<< endl;
//}
ostream& operator<<(ostream& out, const Time& today)
{

	cout<<setfill('0');
	cout<<setw(2)<<today.hours<<':'<<setw(2)<<today.mins<<':'<<setw(2)<< today.seconds<<endl;

	return (out);
};

istream& operator>>(istream& in, Time& today)
{
	cin >> today.hours;
	cin >> today.mins;
	cin >> today.seconds;

	return (in);
};
Time::operator long()
{
	long hrsminseconds;
	hrsminseconds = hours * 3600 + mins * 60 + seconds;
	return (hrsminseconds);
}

int main()
{
	Time a, b;


	cout << "Enter the Time for A : ";
	cin>>a;
	cout<<"The time is: "<<a;
//	a_n = long(a);
//	cout << "The Time as a long integer :";
//	cout << a_n << endl;

	cout << "Enter the The Time for B : ";
	cin>>b;
	cout <<"The time is: "<<b;
//	b_n = long(b);
//	cout << "The Time as a long integer :";
//	cout << b_n << endl;

	return (0);
}

