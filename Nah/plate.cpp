#include <iostream>		// Required for cin & cout
#include "plate.h"		// Contains the user-defined class Plate
#include <iomanip>
using namespace std;

Plate::Plate(){



	for(int c=1;c<=9;c++){
			for (int r=1;r<=9;r++)
			boardarray[c][r]=50.00;
		}
	for (int i=0;i<10;i++){
		boardarray[i][9]=20.00;
		boardarray[9][i]=20.00;
		boardarray[0][i]=20.00;
		boardarray[i][0]=20.00;
	};
	boardarray[2][7]=100.00;
};

void Plate::displayPlate(){

cout<<fixed<<setprecision(2);
for (int r=9;r>=0;r--){
		cout<<r<<" | ";
		for (int c=0;c<10;c++){
		cout<<setw(7)<<boardarray[c][r];

		}
		cout<<endl;


	}
for(int das=0;das<10;das++){
//	cout<<setw(7)<<das;
	cout<<setw(7)<<"--";
};
cout<<endl;
for(int num=0;num<10;num++){
//	cout<<setw(7)<<"-----"<<endl;
	cout<<setw(7)<<num;
	};

};
bool Plate::distributeHeat(){
	bool tempchange;
	for(int i=0;i<10;i++){
		for(int k=0;i<10;i++){
		if (boardarray[i][k]!=20){
			boardarray[i][k]=1/4(boardarray[i+1][k]+boardarray[i-1][k]+boardarray[i][k+1]+boardarray[i][k-1]);
		}
		}
	}

	return tempchange;
}
