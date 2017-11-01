//============================================================================
// Name        : 10.6 Project
// Author      : Hakeem Buchanan
// Description : Prooblem Set 3  Project 5
//============================================================================

#include<iostream>
using namespace std;

void calcs( double current[],double resistance[],double volts[]){
int i;
for( i=0;i<10;i++ ){
volts[i] = current[i] * resistance[i];
}
}

int main(){
int i;
double current[]={10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
double resistance[]={4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
double volts[10];
calcs(current,resistance,volts);
for( i=0;i<10;i++ ){
cout<<"\n"<<volts[i];
}

}


