/*-------------------------------------------------------------------------------------------------------------------------------------
//Author: Hakeem S Buchanan
 * Problem Set 2: Problem 3

 --------------------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;
// declaration section
class RoomDimension
{
 private:
  // static variable declaration
 static int NumRooms;
 double length;
 double width;
 public:
 static void dispFootage(); // static member function
 RoomDimension(double l = 0.0, double w = 0.0) // inline constructor
 { cout<<"** Room Dimension Object is created **"<<endl;
length = l;
width = w;
 NumRooms++;
 }
 void resetDimension(double, double);
};
// static member definition
int RoomDimension::NumRooms = 0;
// implementation section
void RoomDimension::resetDimension(double len = 0.0, double wid = 0.0)
{
	cout<<"** Calling the ResetDimension method **"<<endl;
	length = len;
	width = wid;

	dispFootage(); // static function can be called from inside functio/ static function can be called from inside function
}
// static function definition
void RoomDimension::dispFootage()
{
	cout << "No of Rooms :" << NumRooms << endl;
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

