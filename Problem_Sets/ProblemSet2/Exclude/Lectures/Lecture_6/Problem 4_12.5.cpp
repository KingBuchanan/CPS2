#include<iostream>
#include<cmath>

using namespace std;

class A {
protected:
	int a;
public:
	A(int=1);
	virtual int multiply(int);
	void show (int);
};

A::A (int val){
	a=val;
}

int A::multiply(int n)
{
	return (n*n);
}

void A::show(int i)
{
	cout<<"The function returned "<<multiply(i)<<endl;
}


class B:public A
{
public:
	virtual int multiply(int);
};

int B::multiply(int n)
{
	return(n*n*n);
}

class C: public B
{
public:
	virtual int multiply(int);
};
int C::multiply(int n){
	return(n*n*n*n);
}

int main()
{
	A object_A;
	B object_B;
	C object_C;
	object_A.show(2);
	object_B.show(2);
	object_C.show(2);
	return 0;
}
