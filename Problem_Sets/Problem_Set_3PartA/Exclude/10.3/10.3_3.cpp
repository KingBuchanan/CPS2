//============================================================================
// Name        : 10.3 Problem 3
// Author      : Hakeem Buchanan
// Description : Prooblem Set 3 Third problem.
//============================================================================

#include <iostream>
using namespace std;


int main()
{
	const int L=7;
	int dist[7],miles[L]={15,22,16,18,27,23,30}; //declares two arrays.
	int count;
	int *distPt,*milPt; // declare the pointers needed to store the start address of the arrays.
	milPt=miles; //store the address
	distPt=dist;

	cout<<"The elements of the array elements are "<<endl;

	//use a for loop to copy and display elements
		for (count=0;count<L;count++){
			*(distPt+count)=*(milPt+ count);
			cout<<*(distPt+count)<<endl;
		}
	return 0;
}


