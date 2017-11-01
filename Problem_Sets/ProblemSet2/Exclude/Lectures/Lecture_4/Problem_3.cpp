/*-------------------------------------------------------------------------------------------------------------------------------------
//Author: Hakeem S Buchanan
 * Problem Set 2: Problem 3
 * Copy and Run Program 12.1
 --------------------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;
// declaration section
class Complex
{
// prototype for the overloaded insertion operator
 friend ostream& operator<<(ostream&,  Complex&);
 private:
 double realPart;
 double imaginaryPart;
 public:
 Complex(double real = 0.0, double imag = 0.0) // inline constructor
 { realPart = real; imaginaryPart = imag;}
};
// overloaded insertion operator function
ostream& operator<<(ostream& out,  Complex& num)
{
 char sign = '+'; // set the
 if (num.imaginaryPart < 0) sign = '-'; // correct sign
 if (num.realPart == 0 && num.imaginaryPart == 0)
  cout << 0;
  else if (num.imaginaryPart == 0)
  cout << num.realPart;
  else if (num.realPart == 0)
  cout << num.imaginaryPart << 'i';
  else
 cout <<" "<< num.realPart << ' ' << sign << ' '<< abs(num.imaginaryPart) << 'i';
  return out;
 }
 int main()
 {
  Complex complexOne(12.5,-18.2);
  cout << "The complex number just created is" << complexOne << endl;
  return 0;
 }
