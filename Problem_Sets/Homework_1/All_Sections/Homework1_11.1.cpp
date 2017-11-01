//============================================================================
// Name        : Homework 11.1
// Author      : Hakeem S Buchanan
// Description : Creates a class that displays the time for Question 6.
//For question 8 creates a rectangle with double precision values.
// For Question 9 creates a string that turns into a number for the date.
//============================================================================
#include <iostream>
#include <cmath>


using namespace std;

//declaration section for Question 6
class Time {
 	private:
	int secs;
	int mins;
	int hours;

	public:
	  Time(int=0,int=0,int=0);
	void showData();
	};


//declaration section for Question 8

class Rectangle {
private:
	double length;
	double width;
	double P;
	double A;

public:
	Rectangle(double=0.0, double=0.0);
	void perimeter();
	void area();
	void setData(double,double);
	void showData();
};

//declaration for Question 9
class intDate{
private:
	int Datenumber;
	string day;
	string month;
	string year;

public:
	intDate(string=0,string=0,string=0,int=0);
	void readDate(){
	cout<<"Please enter the day"<<endl;
	 cin<<day;
	 cout<<"Please enter the month"<<endl;
	 cin<<month;
	 cout<<"Please enter the year"<<endl;
	 cin<<year;

	 string t =year<<month<<day;

   cout<<"\n"<<t<<endl;



	}

};
//implementation for Question 6
//------------------------------------------------------------------
Time::Time(int s,int m, int h)
{
 secs=s;
 mins=m;
 hours=h;
}

void Time::showData()
{
cout<<"Question 6a: "<<"\nThe seconds are "<< secs<<"\n The minutes are "<<mins<<"\n The hours are "<<hours<< "\n"<<endl;
}

//-------------------------------------------------------------------

//implementation of Question 8
Rectangle::Rectangle(double l, double w){
	length=l;
	width=w;
	A=0.0;
	P=0.0;

}

void Rectangle::perimeter(){

    P=(2*length)+(width*2);



}
 void Rectangle::setData(double l, double w){
	length=l;
	width=w;
}

 void Rectangle::showData(){
	cout<<"//-------------------------------------------------------------------"<<"\nQuestion 8:"<<"\nThe length is "<< length<<"\n The width is "<<width<<"\n The perimeter is "<<P<<"\n The area is "<<A<<endl;


 }

 void Rectangle::area(){
	A=length*width;
 }

 //-------------------------------------------------------------------
 	//implementation of Question 9
 intDate::intDate(string m, string y, string d, int total){
	 month=m;
	 year=y;
	 day=d;
	 Datenumber=total;
 }

// intDate::readDate(){
//	 cout<<"Please enter the day"<<endl;
//	 cin<<day;
//	 cout<<"Please enter the month"<<endl;
//	 cin<<month;
//	 cout<<"Please enter the year"<<endl;
//	 cin<<year;
//
//	 string t =year<<month<<day;
//
//
//
//	 return 0;
//
// }


int main()
{
	Time a(5,20,1);

	a.showData();

	Rectangle b(5.2, 6.2), c;



	b.perimeter();
	b.area();
	b.showData();
	c.setData(4.3,6.2);
	c.perimeter();
	c.area();
	c.showData();






	return 0;
}


