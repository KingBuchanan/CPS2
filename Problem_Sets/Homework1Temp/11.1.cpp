//============================================================================
// Name        : Project 4
// Author      : Hakeem Buchanan
// Description : Project 4 a and b. Class to change Fractions based on operation. Operations were overloaded.
//============================================================================

#include<iostream>
#include <iomanip>
using namespace std;

#include <cmath>

class Fractions{
private:
	int num;
	int denum;

public:

	Fractions(int numb=1,int denumb=1)
	{ num=numb; denum=denumb;}

	Fractions operator+(const Fractions&);
	Fractions operator-(const Fractions&);
	Fractions operator*(const Fractions&);
	Fractions operator/(const Fractions&);
	void showFractions();
};


 Fractions Fractions::operator+(const Fractions&num2)
 {
	Fractions temp;
	temp.num=((temp.num*num2.denum)+(temp.denum*num2.num));

	temp.denum=(temp.num*num2.denum);
	temp=temp.num/temp.denum;

	return temp;
}

 void Fractions::showFractions(){

	 cout<<"Fraction is: "<<num << '/'<<denum<<endl;

 }

 Fractions Fractions::operator-(const Fractions& num2)
 {
	Fractions temp;
	temp.num=((temp.num*num2.denum)-(temp.denum*num2.num));
	temp.denum=(temp.num*num2.denum);
	temp=temp.num/temp.denum;
	return temp;
}

 Fractions Fractions::operator*(const Fractions& num2)
 {
	Fractions temp;
	temp.num=(temp.num*num2.num);
	temp.denum=(temp.denum*num2.denum);
	temp=temp.num/temp.denum;
	return temp;
}

 Fractions Fractions::operator/(const Fractions& num2)
 {
	Fractions temp;
	temp.num=(temp.num*num2.denum);
	temp.denum=(temp.denum*num2.num);
	temp=temp.num/temp.denum;
	return temp;
}


int main(){

	Fractions a(1,1),b(4,4),c;
	a.showFractions();
	b.showFractions();
    c=a-b;
	c.showFractions();
//	c=a-b;
//	c.showFractions();
//	c=a*b;
//	c.showFractions();
//	c=a%b;

}



