#include <iostream>
#include <cmath>

using namespace std;

const double PI=2.0*asin(1.0);

class Point
{
protected:
	double x,y;

public:
	Point(double=0.0, double=0.0);
	double area();
	double distance(Point&,Point&);
};
Point::Point(double xval,double yval)
{
	x=xval;
	y=yval;
}

double Point::area()
{
	return 0.0;
}

double Point::distance(Point &p1, Point &p2)
{
	return(sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
}

class Circle:public Point
{
protected:
	double radius;
public:
	Circle(double x=0.0, double y=0.0, double r=0.0):Point(x,y), radius(r){}
	double area();
};

double Circle::area(){
	return(2*PI*radius*radius);
}

int main(){
	Point p1(5.5,10.9),p2(25.55,78.95), p;
	Circle c1(5.5,10.9,20.5), c2(25.55,78.95,50.0),c;

	cout<<"Calling area function of Base class for p1  "<<p1.area()<<endl;

	cout<<"Calling area function of derived class for c1 "<<c1.area()<<endl;

	cout<< "Calling distance function of base class for both"<<p.distance(p1,p2)<<endl;

	cout<<"Calling distance function for derived class from c1 and c2"<<c.distance(c1,c2)<<endl;
}
