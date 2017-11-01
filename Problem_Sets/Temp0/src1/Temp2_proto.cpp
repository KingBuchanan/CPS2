//============================================================================
// Name        : Temp2_proto.cpp
// Author      : GHZ
// Description : Version #2 - class example for comparing temperature in (F), (C), & (K)
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
			cout << myDegrees << " (" << myScale << ")";  // removed << endl;
		};

		Temperature toFahrenheit();
		Temperature toCelsius();
		Temperature toKelvin();

		bool operator<(Temperature testTemp) const;
		bool operator>=(Temperature testTemp) const;
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

Temperature Temperature::toFahrenheit()
{
	Temperature tt;
	switch(myScale)
	{
		case 'F' : tt.myDegrees = myDegrees;
				   break;
		case 'C' : tt.myDegrees = (myDegrees * 9.0 / 5.0) + 32.0;
				   break;
		case 'K' : tt.myDegrees = (myDegrees * 9.0 / 5.0) - 459.67;
				   break;
	}
	tt.myScale = 'F';
	return tt;
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

Temperature Temperature::toKelvin()
{
	Temperature tt;
	switch(myScale)
	{
		case 'F' : tt.myDegrees = (myDegrees + 459.67) * (5.0 / 9.0);
				   break;
		case 'C' : tt.myDegrees = (myDegrees + 273.15);
				   break;
		case 'K' : tt.myDegrees = myDegrees;
		           break;
	}
	tt.myScale = 'K';
	return tt;
}


bool Temperature::operator<(Temperature testTemp) const
{
	Temperature tt;

	switch(myScale)
	{
		case 'F' : tt = testTemp.toFahrenheit();
				   break;
		case 'C' : tt = testTemp.toCelsius();
				   break;
		case 'K' : tt= testTemp.toKelvin();
		           break;
	}
	return (myDegrees < tt.getDegrees());

}

bool Temperature::operator>=(Temperature testTemp) const
{
	Temperature tt;

	switch(myScale)
	{
		case 'F' : tt = testTemp.toFahrenheit();
				   break;
		case 'C' : tt = testTemp.toCelsius();
				   break;
		case 'K' : tt= testTemp.toKelvin();
		           break;
	}
	return (myDegrees >= tt.getDegrees());

}

int main()
{
	Temperature t1, t2;
	char again;

	cout << "Compare Two Temperatures in Fahrenheit, Celsius, and Kelvin" << endl;

	do
	{
		cout << "T1: ";
		t1.readTemp();

		cout << "T2: ";
		t2.readTemp();

		t1.displayTemp();
		if (t1 < t2)
			cout << " is less-than ";
		else if (t1 >= t2)
			cout << " greater than or equal to ";
		else
			cout<<"I really don't know";
		t2.displayTemp();
		cout << "\n" << endl;

		cout << "\nMore Temperatures To Compare? [Y/N] :";
		cin >> again;
	}
	while (again == 'Y' || again == 'y');

	cout << "Have a Great Day" << endl;
	return 0;
}
