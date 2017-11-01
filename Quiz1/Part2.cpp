//Author: Hakeem S Buchanan//
//Calculates the return on given balance and interest//


using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>


class Savings {
	private:
	 float balance;
	 float interest;
	 float gains;

	public:
	  Savings(float=0,float=0,float=0);
	 void CalculateSavings();
	 void ShowData();

};

Savings::Savings(float bal, float inter, float Gain){
	balance=bal;
	interest=inter;
	gains=Gain;
}

void Savings::CalculateSavings(){

	gains=balance*(interest/100);


}

void Savings::ShowData(){
	cout<<"Balance is: "<<balance<<"\n Interest is: "<<interest<<"%"<< endl;
	cout<<"Total Gains is :"<<gains<<endl;
}

int main(){

Savings a(43,6.5);

a.CalculateSavings();
a.ShowData();

return 0;
}
