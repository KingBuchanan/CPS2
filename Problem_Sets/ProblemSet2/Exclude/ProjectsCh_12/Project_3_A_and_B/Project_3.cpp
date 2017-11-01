#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
protected:
	int length, width;

public:
	Rectangle (int=0,int=0);
	int area();
};

Rectangle::Rectangle(int l,int w)
{
	length=l;
	width=w;
}

int Rectangle::area()
{
	return(length*width);
}
class Box:public Rectangle
{
	int depth;
public:
	Box(int l=0, int w=0,int d=0):Rectangle(l,w), depth(d){}
int area();
int volume();

};

int Box::area()
{
	return(2*length*width+2*length*depth+2*depth*width);
}

int Box::volume()
{
	return(depth* Rectangle::area());
}

int main()
{
	Rectangle r1(2,3);
	Box b1(2,2,3);

	cout<<"Area of the rectangle:"<<r1.area()<<endl;

	cout<<"THe surface area is:"<<b1.area()<<endl;

	cout<<"The Volume of the box: "<<b1.volume()<<endl;

	return 0;
}
