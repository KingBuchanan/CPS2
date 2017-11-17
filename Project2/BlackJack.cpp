/*
 * BlackJack.cpp
 *
 *  Created on: Oct 16, 2017
 *   Author: Hakeem Buchanan
 *    Used website: http://fredosaurus.com/notes-cpp/misc/ex-deal-cards.html as a reference for the Deck creation. CODE IS NOT PRETTY.NOT FOR FAINT OF HEART.  */
#include <cassert>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Card{
protected:
	int CardiB; // A joke for me. Ranges from 0-51
	static const string Card_FACES[];
	static const string Card_Suit[];
public:
	Card(int card=0)
{CardiB=card;}
	;
	string getSuit() const;
	string getFace() const;
	int getPoints(string face);
};



class Deck:public Card{
private:
	Card CardiB[52];
	int  _nextCardIndex;
public:
	Deck()
{
		// Initialize the array to the ints 0-51
		for (int i=0; i<52; i++) {
			CardiB[i] = Card(i);
		}
		shufflemeup();
		_nextCardIndex = 0;  // index of next available card
};
	Card dealACard();
	void shufflemeup(); //Shuffles cards
};
//CARD IMPLENTATION
//--------------------------------------------------------------
//================================================= static constants
const string Card::Card_FACES[] =  {"A", "2", "3", "4", "5", "6", "7"
		, "8", "9", "10", "J", "Q", "K"};
const string Card::Card_Suit[] = {"S", "H", "C", "D"}; /// Spades, Hearts, Clubs,Diamond.

string Card::getFace() const {
	return Card_FACES[CardiB%13];
}//end getFace


string Card::getSuit() const {
	return Card_Suit[CardiB/13];
}//end getSuit

int Card::getPoints(string faces){
	int transfer;


	if(faces=="A"){
		transfer=11;
	}
	else if (faces=="2")
	{
		transfer=2;
	}
	else if (faces=="3")
	{
		transfer=3;
	}
	else if (faces=="4")
	{
		transfer=4;
	}
	else if (faces=="5")
	{
		transfer=5;
	}
	else if (faces=="6")
	{
		transfer=6;
	}
	else if (faces=="7")
	{
		transfer=7;
	}
	else if (faces=="8")
	{
		transfer=8;
	}
	else if (faces=="9")
	{
		transfer=9;
	}
	else if (faces=="10")
	{
		transfer=10;
	}
	else if (faces=="K")
	{
		transfer=10;
	}
	else if (faces=="Q")
	{
		transfer=10;
	}
	else if (faces=="J")
	{
		transfer=10;
	}
	else
		transfer=0;
	return transfer;
}

//DECK IMPLEMENTATION
//--------------------------------------------------------------
Card Deck::dealACard() {
	assert(_nextCardIndex >= 0 && _nextCardIndex<52);// Works like in VHDL when something is true then returns the value.
	return CardiB[_nextCardIndex++];
}

void Deck::shufflemeup() {
	// Shuffle by exchanging each element randomly
	for (int i=0; i<(52-1); i++) {
		int randnum = i + (rand() % (52-i));
		swap(CardiB[i], CardiB[randnum]);//Swaps two functions.
	}
	_nextCardIndex = 0;
}

//================================================== main
int main() {
	int  numOfCards=2; // Input number for how many cards to deal.
	srand(time(0)); // Initializes random "seed".
	Deck deck;
	int NumPlayers;
	int Player_Turn;
	char Hitme;
	bool Player_True=true;
	int Player_1=0;
	int Player_2=0;
	int Player_3=0;
	int Dealer=0;
	bool Play_true=true;
	string suit;
	string face;
	bool Dealer_Bust=false;
	bool Player_1_Bust=false;
	bool Player_2_Bust=false;
	bool Player_3_Bust=false;
	bool Dealer_BJ=false;// Really lucky.

	do{

		cout<<"Welcome to The Grand Casino!\n\nReady to play some Blackjack?\n\nThis table can handle up to three players. How many players we got today?"<<endl;
		cin>>NumPlayers;

		if (NumPlayers>3){
			cout<<"Whoa there. I said up to 3!\n\n Try again friend.\n\n"<<endl;
		}
		else{
			cout<<"All righty let see here, we got "<< NumPlayers<< " players here. Let's begin"<<endl;
			Player_True=false;
		}

	}while(Player_True!=false);
	//==================================================



	Player_Turn=1;


	do{
		switch(Player_Turn){

		case 1:
		{
			{
				cout<<"-------------------------------------------------------------------------------------------------"<<endl;
				cout<<"OK player "<<Player_Turn<<" you're up: "<<endl;
				cout << "Your Cards are: ";
				Card p1;
				while (numOfCards>0) {
					deck.shufflemeup();

					for (int cardNum=0; cardNum<numOfCards; cardNum++) {
						Card c = deck.dealACard();
						suit = c.getSuit();
						face = c.getFace();
						cout<<"\n" << face <<" Of " << suit << " ";
						numOfCards--;
						Player_1+=p1.getPoints(face);

					}

				}

				cout<<"\nPlayer 1 has  "<<Player_1<<"  total points";
				do {
					cout<<"\nAlright will you (H)it or (S)tay?"<<endl;
					cin>>Hitme;
					if(Hitme=='H') {
						Card d = deck.dealACard();
						suit = d.getSuit();
						face = d.getFace();
						cout<<"\n" << face <<" Of " << suit << " ";
						Player_1+=p1.getPoints(face);
						cout<<"\nPlayer 1 has  "<<Player_1<<"  total points";
					}
					else if(Hitme=='S'){
						Play_true=false;
					}
					if (Player_1>21){
						cout<<"\nOof Busted,Ya lost mate."<<endl;
						Play_true=false;
						Player_1_Bust=true;

					}
					else if(Player_1==21){
						cout<<"Congrats mate ya won."<<endl;
						Play_true=false;
					}
				}while (Play_true!=false);
				Player_Turn++;

			}
			cout<<"-------------------------------------------------------------------------------------------------"<<endl;
			break;

		case 2:
		{
			cout<<"-------------------------------------------------------------------------------------------------"<<endl;
			numOfCards=2;
			cout<<"OK player "<<Player_Turn<<" you're up: "<<endl;
			cout << "Your Cards are: ";
			Card p2;
			Play_true=true;
			while (numOfCards>0) {
				deck.shufflemeup();

				for (int cardNum=0; cardNum<numOfCards; cardNum++) {
					Card e = deck.dealACard();
					suit = e.getSuit();
					face = e.getFace();
					cout<<"\n" << face <<" Of " << suit << " ";
					numOfCards--;
					Player_2+=p2.getPoints(face);

				}
			}
			cout<<"\nPlayer 2 has  "<<Player_2<<"  total points";
			do {
				cout<<"\nAlright will you (H)it or (S)tay?"<<endl;
				cin>>Hitme;
				if(Hitme=='H') {
					Card c = deck.dealACard();
					suit = c.getSuit();
					face = c.getFace();
					cout<<"\n" << face <<" Of " << suit << " ";
					Player_2+=p2.getPoints(face);
					cout<<"\nPlayer 2 has  "<<Player_2<<"  total points";
				}
				else if(Hitme=='S'){
					Player_Turn=Player_Turn+1;
					Play_true=false;

				}
				if (Player_2>21){
					cout<<"\nOof Busted,Ya lost mate."<<endl;
					Player_2_Bust=true;
					Play_true=false;

					Player_Turn=Player_Turn+1;
				}
				else if(Player_2==21){
					cout<<"Congrats mate ya won"<<endl;
					Player_Turn=Player_Turn+1;
				}
			}while (Play_true!=false);

			cout<<"-------------------------------------------------------------------------------------------------";
		}
		}
		break;

		case 3: //Jump to Case issue explain.
		{
			cout<<"-------------------------------------------------------------------------------------------------"<<endl;
			cout<<"OK player "<<Player_Turn<<" you're up: "<<endl;
			numOfCards=2;
			cout << "Your Cards are: ";
			Card p3;
			while (numOfCards>0) {
				deck.shufflemeup();
				for (int cardNum=0; cardNum<numOfCards; cardNum++) {
					Card f = deck.dealACard();
					suit = f.getSuit();
					face = f.getFace();
					cout<<"\n" << face <<" Of " << suit << " ";
					numOfCards--;
					Player_3+=p3.getPoints(face);
				}
			}
			cout<<"\nPlayer 3 has  "<<Player_3<<"  total points";
			do {
				cout<<"\nAlright will you (H)it or (S)tay?"<<endl;
				cin>>Hitme;
				if(Hitme=='H') {
					Card d = deck.dealACard();
					suit = d.getSuit();
					face = d.getFace();
					cout<<"\n" << face <<" Of " << suit << " ";
					Player_3+=p3.getPoints(face);
					cout<<"\nPlayer 3 has  "<<Player_3<<"  total points";
				}
				else if(Hitme=='S'){
					Player_Turn=Player_Turn+1;
					Play_true=false;

				}
				if (Player_3>21){
					cout<<"\nOof Busted,Ya lost mate."<<endl;
					//Player_3=0;
					Play_true=false;
					Player_Turn=Player_Turn+1;
					Player_1_Bust=true;
				}
				else if(Player_3==21){
					cout<<"Congrats mate ya won."<<endl;
					Play_true=false;
				}
			}while (Play_true!=false);
		}
		cout<<"-------------------------------------------------------------------------------------------------";
		break;


		}
	}while(Player_Turn<=NumPlayers);
	cout<<"-------------------------------------------------------------------------------------------------"<<endl;
	//--------------------------------------------------
	//Dealer
	cout<<"OK Kids Dealer's Turn"<<endl;
	Card p4;
	do{

		Card d = deck.dealACard();
		suit = d.getSuit();
		face = d.getFace();
		cout<<"\n" << face <<" Of " << suit << " ";
		Dealer+=p4.getPoints(face);
		if (face=="A"){
			if (Dealer>11){
				Dealer=Dealer-10;
			}
		}

	}while (Dealer<17);
	cout<<"House has "<<Dealer<<endl;

	if (Dealer>21){
		cout<<"\n Crap, House busted. That means anyone who didn't bust wins the game"<<endl;
		Dealer_Bust=true;
	}
	else if (Dealer==21){
		cout<<" Read 'em and weep boys. You work for the House now! BLACKJACK"<<endl;
		Dealer_Bust=false;
		Dealer_BJ=true;
	}
	else
	{
		cout<<"I'll play it safe and stand here.The House Stands.\n Let's see how your luck pans out"<<endl;  }
	//---------------------------------------------------------------------------------------------------------------------------------
	//Results
	if (Dealer_Bust==true){

		if (Player_1_Bust==false){
			cout<<"Player 1: WINS"<<endl;
		}
		else
			cout<<" Player 1: BUSTED"<<endl;

		if (Player_2_Bust==false){
			cout<<" Player 2: WINS"<<endl;}
		else
			cout<<" Player 2: BUSTED"<<endl;


		if (Player_3_Bust==false){
			cout<<" Player 3: WINS"<<endl;
		}
		else
			cout<<" Player 3: BUSTED"<<endl;
	}

	else{
		cout<<"Since I didn't bust let's see who has the highest score"<<endl;

		cout<<"--------------------------------------------------------------------------------------------"<<endl;
		if (Dealer_BJ==true){

			cout<<" EVERYBODY LOST LOSERS. LET'S GO CHOP CHOP YOU WORK FOR ME NOW.KISS YA KIDS GOODBYE AND START YA SHIFTS"<<endl; //Dealer is a bad winner.
		}

		else {
			cout<<"SCORES ARE: \n\n"<<endl;
			if(Dealer_Bust==false){
			cout<<"Dealer with: "<<Dealer<<endl;
			}
			else {
				cout<<"\nDealer busted"<<endl;
			}
			if(Player_1_Bust==false){
				cout<<"\nPlayer 1 with: "<<Player_1<<endl;
					}
			else {
				cout<<"\nPlayer 1 busted"<<endl;
			}
			if(Player_2_Bust==false){
							cout<<"\nPlayer 2 with: "<<Player_1<<endl;
								}
			else {
							cout<<"\nPlayer 2 busted"<<endl;
						}
			if(Player_3_Bust==false){
							cout<<"\nPlayer 3 with: "<<Player_1<<endl;
								}
			else {
							cout<<"\nPlayer 3 busted"<<endl;
						}


		}



		cout<<" Scores higher than the Dealer, get to leave. Come Back to the Grand Casino Sometime."<<endl;
		return 0;
	}
}//end main

//     cout<<"Do you wanna Hit(H) or Stay(S)?"<<endl;
//       cin>>Hitme;
//       break;
