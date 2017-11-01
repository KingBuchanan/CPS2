//============================================================================
// Name        : 13.4 Problem Set 3b
// Author      : Hakeem Buchanan
// Description : Problem Set 3B
//============================================================================

#include <iostream>
#include <string>
using namespace std;


struct Record{
	string stock_1,stock_2,stock_3,stock_4,stock_5;
	double per_share1,per_share_2,pershare_3,per_shar4,per_share5;
	int ratio1,ratio2,ratio3,ratio4,ratio5;
};
int main(){
	Record stock;
	cout<<"Enter the stock name number for 1: ";
	cin>>stock.stock_1;
	cout<<"\nEnter the estimated earnings per share  for the stock "<<stock.stock_1;
	cin>> stock.per_share1;
	cout<<"\nEnter the ratio  for the stock "<<stock.stock_1;
		cin>> stock.ratio1;

	cout<<"Enter the stock name number for 2: ";
		cin>>stock.stock_2;
		cout<<"\nEnter the estimated earnings per share  for the stock "<<stock.stock_2;
			cin>> stock.per_share_2;
			cout<<"\nEnter the ratio  for the stock "<<stock.stock_2;
					cin>> stock.ratio2;

		cout<<"Enter the stock name number for 3: ";
			cin>>stock.stock_3;
			cout<<"\nEnter the estimated earnings per share  for the stock "<<stock.stock_3;
				cin>> stock.pershare_3;
				cout<<"\nEnter the ratio  for the stock "<<stock.stock_3;
						cin>> stock.ratio3;

			cout<<"Enter the stock name number for 4: ";
				cin>>stock.stock_4;
				cout<<"\nEnter the estimated earnings per share  for the stock "<<stock.stock_4;
					cin>> stock.per_shar4;
					cout<<"\nEnter the ratio  for the stock "<<stock.stock_4;
							cin>> stock.ratio4;

					cout<<"Enter the stock name number for 5: ";
									cin>>stock.stock_5;
									cout<<"\nEnter the estimated earnings per share  for the stock "<<stock.stock_5;
										cin>> stock.per_share5;
										cout<<"\nEnter the ratio  for the stock "<<stock.stock_5;
												cin>> stock.ratio5;


						cout <<"The Price for Stock "<< stock.stock_1<< " is "<<"$"<<stock.per_share1*stock.ratio1<<endl;
						cout <<"The Price for Stock "<< stock.stock_2<< " is "<<"$"<<stock.per_share_2*stock.ratio2<<endl;
						cout <<"The Price for Stock "<< stock.stock_3<< " is "<<"$"<<stock.pershare_3*stock.ratio3<<endl;
						cout <<"The Price for Stock "<< stock.stock_4<< " is "<<"$"<<stock.per_shar4*stock.ratio4<<endl;
						cout <<"The Price for Stock "<< stock.stock_5<< " is "<<"$"<<stock.per_share5*stock.ratio5<<endl;
}


