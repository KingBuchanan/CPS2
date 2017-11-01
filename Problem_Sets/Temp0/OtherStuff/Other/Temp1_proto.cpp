//============================================================================
// Name        : Temp1_proto.cpp
// Author      : GHZ
// Description : Version #1 - class example for converting temperature in (F), (C), & (K)
//============================================================================
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Temperature
{
	private:
		double myDegrees;
		char myScale;

	public:
		Temperature (double = 0.0, char = 'F');

		double getDegrees();
		char getScale();

		void setDegrees(double);
		void setScale(char);

		void readTemp()
		{
			cout << "Enter Temperature <value> <F/C/K> : ";
			cin >> myDegrees >> myScale;
		};

		void displayTemp()
		{
			cout << fixed << setw(6) << setprecision(2);
			cout << myDegrees << " (" << myScale << ")" << endl;
		};

	Temperature toFahrenheit();
	Temperature toCelsius();
	Temperature toKelvin();
};

Temperature::Temperature (double degrees, char scale)
{
	myDegrees = degrees;
	myScale = scale;
}

double Temperature::getDegrees()
{
	return (myDegrees);
}

char Temperature::getScale()
{
	return (myScale);
}

void Temperature::setDegrees(double degrees)
{
	myDegrees = degrees;
}

void Temperature::setScale(char scale)
{
	myScale = scale;
}

Temperature Temperature::toCelsius()
{
	Temperature tt;
	switch(myScale)
	{
		case 'F' : tt.myDegrees = (myDegrees - 32.0) * (5.0 / 9.0);
				   break;
		case 'C' : tt.myDegrees = myDegrees;
				   break;
		case 'K' : tt.myDegrees = (myDegrees - 273.15);
				   break;
	}
	tt.myScale = 'C';
	return tt;
}

Temperature Temperature::toFahrenheit()
{
	Temperature tt;
	switch(myScale)
	{
		case 'F' : tt.myDegrees = myDegrees;
				   break;
		case 'C' : tt.myDegrees = (myDegrees  * (5.0 / 9.0)+32);
				   break;
		case 'K' : tt.myDegrees = (myDegrees + 459.67)*(5.0/9.0);
				   break;
	}
	tt.myScale = 'F';
	return tt;
}

Temperature Temperature::toKelvin()
{
	Temperature tt;
	switch(myScale)
	{
		case 'F' : tt.myDegrees = ((myDegrees*9.0/5.0)- 459.67);
				   break;
		case 'C' : tt.myDegrees = (myDegrees- 273.15);
				   break;
		case 'K' : tt.myDegrees = myDegrees;
				   break;
	}
	tt.myScale = 'K';
	return tt;
}






int main()
{

	char again;
	Temperature t, t_f, t_c, t_k;

	cout << "Displays Equivalent Temperatures in Fahrenheit, Celsius, and Kelvin" << endl;

	do
	{
		t.readTemp();

	    t_f = t.toFahrenheit();
	    t_f.displayTemp();

		t_c = t.toCelsius();
		t_c.displayTemp();

        t_k = t.toKelvin();
     	t_k.displayTemp();

		cout << "\nMore Temperatures To Convert? [Y/N] :";
		cin >> again;
	}
	while (again == 'Y' || again == 'y');

	cout << "Have a Great Day" << endl;

	return 0;
}
