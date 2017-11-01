//============================================================================
// Name        : Temp0.cpp
// Author      : GHZ
// Description : Version #0 - class example for converting temperature in (F), (C), & (K)
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

		void displayTemp()
		{
			cout << fixed << setw(6) << setprecision(2);
			cout << myDegrees << " (" << myScale << ")" << endl;
		};
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

int main()
{
	Temperature t1(35.0, 'F'), t2, t3, t4, t5, t6;
	double mainDegrees;
	char mainScale;

	cout << "T1: ";
	t1.displayTemp();

	cout << "T2: ";
	t2.setDegrees(-45.0);
	t2.setScale('K');
	t2.displayTemp();

	cout << "T3: ";
	t3 = t2;
	t3.displayTemp();

	cout << "T4: ";
	mainDegrees = t1.getDegrees();
	mainScale = t1.getScale();
	t4.setDegrees(mainDegrees);
	t4.setScale(mainScale);
	t4.displayTemp();

	cout << "T5: ";
	t5.setDegrees(t1.getDegrees());
	t5.setScale(t1.getScale());
	t5.displayTemp();

	cout << "Have a Great Day" << endl;

	return 0;
}
