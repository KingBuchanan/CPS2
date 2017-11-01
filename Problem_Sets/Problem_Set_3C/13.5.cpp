//============================================================================
// Name        : 13.5
// Author      : Hakeem Buchanan
// Description : Prooblem Set 3 Part C
//============================================================================


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAXRECS = 3;   // maximum no. of records

struct TeleType
{
  string name;
  string phoneNo;
  TeleType *nextaddr;
};

void populate(TeleType *);   // function prototype needed by main()
void display(TeleType *);    // function prototype needed by main()
void insert(TeleType *);
int main()
{
  int i;
  TeleType *list, *current;

  // get a pointer to the first structure in the list
  list = new TeleType;
  current = list;

  // populate the current structure and create the remaining structures
  for(i = 0; i < MAXRECS - 1; i++)
  {
	populate(current);
	current->nextaddr = new TeleType;
	current = current->nextaddr;
  }

  populate(current);         // populate the last structure
  current->nextaddr = NULL;  // set the last address to a NULL address
  cout << "\nThe list consists of the following records:\n";
  display(list);   // display the structures
  insert(current);
  display(list);
  return 0;
}

// input a name and phone number
void populate(TeleType *record) // record is a pointer to a
{                              // structure of type TeleType
  cout << "Enter a name: ";
  getline(cin, record->name);
  cout << "Enter the phone number: ";
  getline(cin, record->phoneNo);

  return;
}

void display(TeleType *contents) // contents is a pointer to a
{                                      // structure of type TeleType
  while (contents != NULL)        // display till end of linked list
  {
    cout << '\n' << setiosflags(ios::left)
		 << setw(30) << contents->name
         << setw(20) << contents->phoneNo;
    contents = contents->nextaddr;
  }
  cout << endl;

  return;
}
void insert(TeleType *prev)
{
	TeleType *newStruc=new TeleType;

	if(newStruc==NULL)
		cout<<"NO SPACE"<<endl;
	else populate(newStruc);

	newStruc->nextaddr=prev->nextaddr;
	prev->nextaddr=newStruc;



}

