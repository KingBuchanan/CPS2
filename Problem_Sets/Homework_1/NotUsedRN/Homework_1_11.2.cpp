//============================================================================
// Name        : Homework_1 11.2
// Author      : Hakeem S Buchanan
//Date: 9/9/17
// Description : Homework Creates a rectangle using classes for question 5,
//for Question 11 Has a student id and GPA output
//Question 14 creates a food data table that inputs data, changes that table or update that data
//============================================================================
#include <iostream>
#include <cmath>


using namespace std;
//Question 5 implementation
//-------------------------------------------------------------------
class Rectangle {
private:
	double length;
	double width;
	double P;
	double A;

public:
	Rectangle(double=1.0, double=1.0);
	void perimeter();
	void area();
	void setData(double,double);
	void showData();
};

Rectangle::Rectangle(double l, double w){
	length=l;
	width=w;
	A=0.0;
	P=0.0;

}
//-------------------------------------------------------------------
//declaration Question 11
class Student{
private:
	int StID;//Student ID Number
	double GPA;

public:
	Student(int=111111,double=0.0);
	void ShowMETHEMONEY(); //I gotta make this fun for myself. Outputs values for GPA and Student ID.

};

//-------------------------------------------------------------------
//declaration Question 14
class FEEDMEH //Types of food
{
private:
	string type;
	string name;

public:
	FEEDMEH();
	void newfood(string, string);//adds a food
	void change (string, string);// changes food
	void Cafeteria();//displays food
};



// implementation for Question 5
//-------------------------------------------------------------------
void Rectangle::perimeter(){

    P=(2*length)+(width*2);

cout<<"The perimeter is "<< P<<endl;

}
 void Rectangle::setData(double l, double w){
	length=l;
	width=w;
}

 void Rectangle::showData(){
cout<<"\nQuestion 5:"<<"\nThe length is "<< length<<"\n The width is "<<width<<endl;


 }

 void Rectangle::area(){
	A=length*width;
	cout<<"The area is "<<A<<endl;
 }
 //-------------------------------------------------------------------
 //Implementation Question 11
  Student::Student(int i, double g){
	 StID=i;
	 GPA=g;
	 return;
 }
 void Student::ShowMETHEMONEY(){
	 cout<<"-------------------------------------------------------------------"<<"\nQuestion 11:"<<endl;
	 cout<< "Student ID number is "<<StID<<endl;
	 cout<< "Student GPA is "<< GPA <<endl;

 }
 //-------------------------------------------------------------------
//Implementation Question 14

 FEEDMEH::FEEDMEH(){
	 cout<<"//-------------------------------------------------------------------"<<"\nFEED THE BEAST"<<endl;
 }
 void FEEDMEH::newfood(string t, string n){
	 type=t;
	 name=n;
 }

 void FEEDMEH::change(string t, string n){
	 type=t;
	 name=n;
 }

 void FEEDMEH::Cafeteria(){
	 cout<<"-------------------------------------------------------------------"<<endl;
	 cout<<"\nQuestion 14: "<< endl;
	 cout<<"Today's selection is :"<<endl;
	 cout<<"The Type of Food is: "<< type<<endl;
	 cout<< " The Food name is: "<< name<< endl;
	 cout<<"Enjoy!!"<<endl;
 }

 int main(){
	 string foodname;
	 string foodtype;
	 int choice;

	Rectangle a;

	a.showData();
	a.area();
	a.perimeter();

	a.setData(3.4,3.5);
	a.showData();
	a.area();
	a.perimeter();

 //-------------------------------------------------------------------
    Student b,c(46512,3.2);

    b.ShowMETHEMONEY();
    c.ShowMETHEMONEY();
    //-------------------------------------------------------------------

    cout<<"\n Enter choice";
    cout<<"\n1. add Food:";
    cout<<"\n2. Modify Food";
    cout<<"\n3. Delete Food";
    cout<<"\n4. Exit this menu"<<endl;
    cin>>choice;


    FEEDMEH f1;
//    cout<<"Enter Food type:"<<endl;
//    cin>>foodname;
//    cout<<"Enter Food name :"<<endl;
//    cin>> foodtype;
//    f1.newfood(foodtype,foodname);

    /*FEEDMEH f2;
    cout<<"Enter Food type:"<<endl;
        cin>>foodname;
        cout<<"Enter Food name :"<<endl;
        cin>> foodtype;

        f2.newfood(foodtype,foodname);*/
//        FEEDMEH f3;
//
//        cout<<"Enter Food type:"<<endl;
//            cin>>foodname;
//            cout<<"Enter Food name :"<<endl;
//            cin>> foodtype;
//
//            f3.newfood(foodtype,foodname);
//            FEEDMEH f4;
//            cout<<"Enter Food type:"<<endl;
//                cin>>foodname;
//                cout<<"Enter Food name :"<<endl;
//                cin>> foodtype;
//
//                f4.newfood(foodtype,foodname);

//                f1.Cafeteria();
//                f2.Cafeteria();
//                f3.Cafeteria();
//                f4.Cafeteria();

                while(choice>0 && choice <4)
                {
                	switch(choice)
                	{
                	case 1:
                		cout<<"enter data for food : ";
                		cout<<"\n Enter Food Type: ";
                		cin>>foodtype;
                		cout<<"Enter Food: ";
                		cin>>foodname;
                		f1.newfood(foodtype,foodname);
                		f1.Cafeteria();
                		break;
                	case 2:
                		cout<< "\n Update data ";
                		cout<<"\n Enter Food Type: ";
                		cin>>foodtype;
                		cout<<"Enter Food: ";
                	    cin>>foodname;
                	    cout<<"\n Food Data updated! \n"<<endl;
                	    f1.change(foodtype,foodname);
                	    f1.Cafeteria();
                	    break;
                	case 3:
                		f1.change("","");
                		cout<< "\n Food Data deleted \n"<<endl;
                		f1.Cafeteria();
                		break;
                	case 4:
                		cout<<"\n Goodbye";
                		break;

                	}
                }
                	cout<<"\n Enter choice: ";
                	cin>>choice;

	return 0;


}

