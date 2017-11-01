//============================================================================
// Name        : 10.4 Problem 6
// Author      : Hakeem Buchanan
// Description : Prooblem Set 3 10.4 Problem 6
//============================================================================

#include <iostream>
using namespace std;

void show(double *,int);

int main()
{
	const int lengthR=9;
	double rates[lengthR]={6.5,7.2,7.5,8.3,8.6,9.4,9.6,9.8,10.0};

	show(rates,lengthR);
	return 0;
}
void show(double *rates, int lengthR)
{
	int count;

	for (count=0;count<lengthR;count++){
		//Print the elements of array using pointer
		cout<<"The element of the array is "<<*(rates++)<<endl;
	}
}


