//============================================================================
// Name        : Project 1
// Author      : Hakeem S Buchanan
// Description : A four function Complex Calculator. Converts everything to rectangular form calculating ease
//however still displays both polar and rectangular values.
//============================================================================


#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

class ComplexNumber
	{
private:
		double realPart;
		double imaginaryPart;
		char form;
public:
 ComplexNumber(double real = 0.0, double imag = 0.0, char Form_1='r') // inline constructor
 {realPart = real; imaginaryPart = imag; form=Form_1;}
// void showValuesRec (); // accessor prototype
// void showValuesPol(double, double);
// void assignNewValues(double real, double imag);
 void getValues();
 void ShowBothValues();
 ComplexNumber operator*(const ComplexNumber&);
 ComplexNumber operator-(const ComplexNumber&);
 ComplexNumber operator+(const ComplexNumber&);
 ComplexNumber operator/(const ComplexNumber&);
};
//void ComplexNumber::showValuesRec(){//part one of SHOWBOTHVALUES
//	char sign = '+';
//	  form='r';
//	 if (imaginaryPart < 0) sign = '-';
//	 cout<< "\n"<<form<<":  "<< realPart << ' ' << sign << ' ' <<"j"<<(imaginaryPart)<<endl;
//}

//void ComplexNumber::showValuesPol(double x, double y){//PART 2 OF SHOWBOTH VALUES
//form='p';
//double angle;
//char sign = '+';
//
//  double PolarValue=sqrt(pow(x,2)+pow(y,2));  //conversion
//    angle=atan(y/x);
//    if (angle < 0) sign = '-';
// cout<<form<<":  "<<PolarValue<<"< " <<angle<<endl;
//
//}
void ComplexNumber::ShowBothValues(){
	char signR = '+';
	char signP='+';
	double x=realPart;
	double y=imaginaryPart;
	double angle;
	double RealPolar;
	double ImagPolar;
	 angle=atan(y/x)*(180/3.14159);;

	if (form=='r') //conversion
	{
		 if (imaginaryPart < 0) signR = '-';
		 cout<<form<<":  "<< realPart << ' ' << signR << ' ' <<"j"<<(imaginaryPart)<<endl;
		


//		      double x=realPart;
//		      double y=imaginaryPart;
		 	  double PolarValue=sqrt(pow(x,2)+pow(y,2));

		 	    if (angle < 0) signR = '-';
				cout<<fixed<<setw(6)<<setprecision(2);
		 	 cout<<"P:"<<PolarValue<<"< " <<angle<<endl;
}
	else if (form =='p')
	{
		cout<<form<<": "<<realPart<<" < "<<imaginaryPart;

		RealPolar=realPart*cos(imaginaryPart*(3.14159/180));
		ImagPolar=realPart*sin(imaginaryPart*(3.14159/180));

		 if (ImagPolar < 0) signP = '-';
		 cout<<fixed<<setw(6)<<setprecision(2);
		cout<< "   R:"<< RealPolar << ' ' << signP << ' ' <<"j"<<(ImagPolar)<<endl;
	}
	else
		cout<<"Incorrect Value Inputted please reconsider."<<endl;
}
//void ComplexNumber::assignNewValues(double real, double imag){
//    form='r';
//	realPart=real;
//	imaginaryPart=imag;
//
//}
ComplexNumber ComplexNumber::operator +(const ComplexNumber& numb1){// Addition OVERLOADED
	ComplexNumber temp;
	 temp.realPart = realPart + numb1.realPart;
	 temp.imaginaryPart = imaginaryPart +numb1.imaginaryPart;
	 return temp;
}
ComplexNumber ComplexNumber::operator -(const ComplexNumber& numb1){// Subtraction OVERLOADED
	ComplexNumber temp;
	 temp.realPart = realPart - numb1.realPart;
	 temp.imaginaryPart = imaginaryPart-numb1.imaginaryPart;
	 return temp;
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& numb1){// Multiplication OVERLOADED
	ComplexNumber temp;
	temp.realPart = ((realPart * numb1.realPart)-(numb1.imaginaryPart*imaginaryPart));
	temp.imaginaryPart = ((imaginaryPart*numb1.realPart)+(numb1.imaginaryPart*realPart));
	 return temp;
}
ComplexNumber ComplexNumber::operator/(const ComplexNumber& numb1){ //Division OVERLOADED
	ComplexNumber temp;
    double div=(pow(numb1.realPart,2))+pow(numb1.imaginaryPart,2);
	temp.realPart = ((realPart*numb1.realPart)+(imaginaryPart*numb1.imaginaryPart))/div;
	temp.imaginaryPart = ((realPart*numb1.imaginaryPart)-(realPart*numb1.imaginaryPart))/div;
return temp;
}

void ComplexNumber::getValues(){
	cout<<"Enter Values For either polar or rectangular\n"<<endl;
	cin >>realPart>>imaginaryPart>>form;
}

int main(){
	ComplexNumber Calc1,Calc2,Swap,Ans,temp,temp1;//need new object names
//	a.assignNewValues(4.3, 2.3);
//	a.showValuesPol();
//	a.showValuesRec();
	char choice='M'; //have an empty choice

	do {
	cout<< "Please enter a Choice From the List Provided"<<endl;
	cout<<"\n a: Enter a Complex Number"<<endl;
	cout<<"\n b: Enter a Complex Number"<<endl;
	cout<<"\n +: Addition"<<endl;
	cout<<"\n -: Subtraction"<<endl;
	cout<<"\n *: Multiplication"<<endl;
	cout<<"\n /: Division"<<endl;
	cout<<"\n S: Swap Positions (A gets B and vice versa)"<<endl;
	cout<<"\n A: Move Answer to A"<<endl;
	cout<<"\n B: Move Answer to B"<<endl;
	cout<<"\n Q: Quit"<<endl;
cin>>choice;
	switch(choice){
	case 'M':

		break;

	case 'a':

    Calc1.getValues();
    cout<<"(A):\n";
    Calc1.ShowBothValues();
		break;
	case 'b':

		Calc2.getValues();
		cout<<"(B):\n";
		Calc2.ShowBothValues();
		break;
	case '+':
		cout<<"(Addition):\n";
		cout<<"(A):\n";
		Calc1.ShowBothValues();
		cout<<"(B):\n";
		Calc2.ShowBothValues();
		Ans=Calc1+Calc2;
		cout<<"(Addition Ans):\n";
		Ans.ShowBothValues();
		break;
	case '-':
		cout<<"(Subtraction):\n";
		cout<<"(A):\n";
				Calc1.ShowBothValues();
				cout<<"(B):\n";
				Calc2.ShowBothValues();
		Ans=Calc1-Calc2;
		cout<<"(Ans):\n";
				Ans.ShowBothValues();
		break;
	case '*':
		cout<<"(Multiplication):\n";
		cout<<"(A):\n";
				Calc1.ShowBothValues();
				cout<<"(B):\n";
				Calc2.ShowBothValues();
		Ans=Calc1*Calc2;
		cout<<"(Ans):\n";
				Ans.ShowBothValues();
		break;
	case '/':
		cout<<"(Division):\n";
		cout<<"(A):\n";
				Calc1.ShowBothValues();
				cout<<"(B):\n";
				Calc2.ShowBothValues();
		Ans=Calc1/Calc2;
		cout<<"(Ans):\n";
				Ans.ShowBothValues();
		break;
	case 'S':
		cout<<"(Swap):\n";
		cout<<"(A):\n";
		Calc1.ShowBothValues();
		cout<<"(B):\n";
		Calc2.ShowBothValues();
		temp=Calc1;
		temp1=Calc2;
		Calc1=temp1;
		Calc2=temp;
		cout<<"(A):\n";
				Calc1.ShowBothValues();
				cout<<"(B):\n";
				Calc2.ShowBothValues();
		break;
	case 'A':
		cout<<"(Ans):\n";
		Ans.ShowBothValues();
		Calc1=Ans;
		cout<<"(A):\n";
		Calc1.ShowBothValues();
		break;
	case 'B':
		cout<<"(Ans):\n";
		Ans.ShowBothValues();
		Ans=Calc2;
		cout<<"(B):\n";
		Calc2.ShowBothValues();
		break;
	case 'Q'|'q':
		cout<<"Have a great day!"<<endl;
		break;
	default:
		cout<<"Error. Incorrect Input. Please Re-think choice"<<endl;
		cout<<"\n"<<"\n"<<"\n"<<endl;
		break;
	}

	} while (choice!=('Q'|'q'));

}

