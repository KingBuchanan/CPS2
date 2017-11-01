/*
 * Homework1.cpp
 *
 *  Created on: Aug 31, 2017
 *
 */


// Homework 1 - Hakeem Buchanan 8/31/10

#include <iostream>
#include <cmath>


using namespace std;

//declaration section
class Time {
 	private:
	int secs, mins, hours;

	public:
	  Time(int=0,int=0,int=0);
	void showData();
	};

//implementation

void Time::showData()
{
cout<<"The seconds are  "<< secs<<"\n The minutes are  "<<mins<<"\n The hours are "<<hours<< "\n"<<endl;
}

int main()
{
	Time a;

	a.showData();

	return 0;
}


