//============================================================================
// Name        : Polar1.cpp
// Author      : GHZ
// Description : Simple example of classes
//============================================================================
#include <iostream>
#include <cmath>

using namespace std;

// declaration section
class Polar
{
	private:					
		float magnitude;
		float angle;

	public:
		Polar (float = 0.0, float = 0.0);
		void assignPolarValues(float, float);
		void showPolarValues();
};

// implementation section
Polar::Polar(float m, float a)
{
	magnitude = m;
	angle = a;
}

void Polar::assignPolarValues(float m, float a)
{	
	magnitude = m;
	angle = a;
}

void Polar::showPolarValues()
{
	char sign = '+';
	if (angle<0)
		sign = '-';
	cout << "The Polar Number is " << magnitude << " < " << sign << abs(angle) << "\n" << endl;
}

int main()
{
	Polar a(12.34, -67.89), b;

	a.showPolarValues();
	b.showPolarValues();

	b.assignPolarValues(-34.56, 76.54);
	b.showPolarValues();

	return 0;
}


