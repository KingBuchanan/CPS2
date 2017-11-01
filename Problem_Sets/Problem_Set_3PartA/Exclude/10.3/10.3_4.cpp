//============================================================================
// Name        : 10.3 Problem 4
// Author      : Hakeem Buchanan
// Description : Prooblem Set 3 Fourth Problem.
//============================================================================


#include <iostream>
using namespace std;


int main()
{
const int L=10;

double gallons[L]={10.3, 15.6,8.7,14,16.3,15.7,14.9,10.7,8.3,8.4};
double miles[L]={240.5,300.0,189.6,310.6,280.7,216.9,199.4,160.3,177.4,192.3};
double mpg[L];

int count;
double *milPt,*gallPt,*mpgPt;
milPt=miles;
gallPt=gallons;
mpgPt=mpg;

cout<<"The array elements are"<<endl;
	for(count=0;count<L;count++){
		mpg[count]=(*(milPt+count)/(*(gallPt+count)));

		cout<<*(mpgPt+count)<<endl;
	}
}
