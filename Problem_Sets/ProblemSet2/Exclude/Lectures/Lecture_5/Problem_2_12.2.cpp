/*-------------------------------------------------------------------------------------------------------------------------------------
//Author: Hakeem S Buchanan
 * Problem Set 2: Problem 5
 *
 --------------------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;
// declaration section
class RoomDimension
{
 private:
 static double TotalSqFootage; // static variable declaration
 double length;
 double width;
 public:
 static void dispFootage(); // static member function
 RoomDimension(double l = 0.0, double w = 0.0) // inline constructor
 {length = l; width = w; TotalSqFootage += l * w;}
 void resetDimension(double, double);
};
// static member definition
double RoomDimension::TotalSqFootage = 0.0;
// implementation section
void RoomDimension::resetDimension(double len = 0.0, double wid = 0.0)
{
 TotalSqFootage -= length * width; // remove previous square footage
 length = len;
 width = wid;
 TotalSqFootage += len * wid; // add new square footage
 dispFootage(); // static function can be called from inside function
}
// static function definition
void RoomDimension::dispFootage()
{
 cout << "The total square footage is now " << TotalSqFootage << endl;
}
int main()
{
 RoomDimension::dispFootage(); // static function call
 RoomDimension Kitchen(20.0, 15.0);
 RoomDimension::dispFootage(); // static function call
 RoomDimension Hall(25.0, 4.0);
 Hall.dispFootage(); // another means of calling the static function
 Hall.resetDimension(10, 5);
 return 0;
}
