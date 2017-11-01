//============================================================================
// Name        : Project 4
// Author      : Hakeem Buchanan
// Description : Project 1 a and b. Class to change Fractions based on operation. Operations were overloaded.
//============================================================================

#include<iostream>
#include <iomanip>
using namespace std;

#include <cmath>

class Fractions{
private:
	int num;
	int denum;
	char numr;
	char denumr;

public:

	Fractions(int numb=1,int denumb=1,char numb_r='1',char denum_r='1')
	{ num=numb; denum=denumb;numr=numb_r;denumr=denum_r;}
	Fractions operator+(const Fractions&);
	Fractions operator-(const Fractions&);
	Fractions operator*(const Fractions&);
	Fractions operator/(const Fractions&);

 friend istream& operator>>(istream&, Fractions&);

	friend ostream& operator<<(ostream&, const Fractions&);
};


 Fractions Fractions::operator+(const Fractions&num2)
 {
	Fractions temp;
	temp.num=((temp.num*num2.denum)+(temp.denum*num2.num));
	temp.denum=(temp.num*num2.denum);
	temp=temp.num/temp.denum;
	return temp;
}

// void Fractions::showFractions(){

//	 cout<<"Fraction is: "<<num << '/'<<denum<<endl;
//
// }
 ostream& operator<<(ostream& out, const Fractions& today)
 {


 	cout<"Fraction is: "<<today.numr<<'/'<<today.denumr<<endl;

 	return (out);
 };

// istream& operator>>(istream& in, Fractions& today)
// {
// 	cin >> today.numr;
// 	cin >> today.denumr;
//
//
// 	return (in);
// };
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

	Fractions a,b,c;

   cout<<"Please input the numerator and denominator"<<endl;
   cin<<a;
   cout>>"The resulting fraction is :"<<b<<endl;
   cout<<"Please input the numerator and denominator"<<endl;
   cin<<b;
return 0;
}



