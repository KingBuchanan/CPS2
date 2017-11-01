//============================================================================
// Name        : Project 1 Chapter 11
// Author      : Hakeem Buchanan
// Description : Project 1 of chapter 11 Class to convert values to polar using cartesian formula
//============================================================================

#include<iostream>
using namespace std;

#include <cmath>

class Pol_coord{

private:
	float dist;
	float theta;

public:
	Pol_coord();
	void showdata();
	void convtoPolar(float,float);

};
Pol_coord::Pol_coord()
{
	dist=0;
	theta=0;
}

void Pol_coord::convtoPolar(float v1,float v2){
	dist= sqrt(pow(v1,2)+pow(v2,2));
	theta=(atan(v2/v1))*(180/3.1416);
}

void Pol_coord::showdata(){

	cout<<"Polar Coordinates are :";
	cout<<dist<<" , "<<theta<<endl;

}

int main(){
	Pol_coord a;

	a.convtoPolar(4.56556,6.668688);
	a.showdata();

	return 0;

}
