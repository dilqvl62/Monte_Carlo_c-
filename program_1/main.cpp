#include<iostream>
#include "theDeck.h"
#include "theHand.h"
#include "simulated.h"
using namespace std;



int main()  
{
	char another_hand ='y';
	do {

		string cards[52] = { "KS","QS","JS","AS","2S","3S","4S","5S","6S","7S","8S","9S","10S",
			"KH","QH","JH","AH","2H","3H","4H","5H","6H","7H","8H","9H","10H",
			"KD","QD","JD","AD","2D","3D","4D","5D","6D","7D","8D","9D","10D",
			"KC","QC","JC","AC","2C","3C","4C","5C","6C","7C","8C","9C","10C" }, myHand[13], yourHand[13];

		theDeck tDeck(cards);
		tDeck.shuffle(cards);
		theHand the_hand(cards, myHand, yourHand);


		cout << "Here is your hand:" << endl;
		for (int i = 0; i < 13; i++) {
			cout << yourHand[i] << " ";

		}
		cout << endl;
		cout << "This hand is worth " << the_hand.worth(yourHand) << " " << "points." << endl ;
		cout << "Running simulation......"<<endl<< endl;

		simulated play;
		play.tally(cards, myHand, yourHand);
		cout << endl << endl;
		cout << "Another hand [Y/N]? ";
		cin >> another_hand;

	} while (another_hand == 'Y' || another_hand == 'y');
	
}
/*
Here is your hand :
KD QC 4D 6C KS AD 6S AH 5C AS 2C 9D 3S
This hand is worth 22 points.
Running simulation......

The estimated probability based on 500 simulated hands :
Pass: 29.6
Part Score : 39.8 %
Game : 25.8 %
Small Slam : 4.4 %
Grnad Slam : 0.4 %


Another hand[Y / N] ? Y
Here is your hand :
KD 8C 7S 8S 6S 3S AC KC QD 7D 7H 4D AS
This hand is worth 18 points.
Running simulation......

The estimated probability based on 500 simulated hands :
Pass: 25.4
Part Score : 49.2 %
Game : 20.8 %
Small Slam : 4 %
Grnad Slam : 0.6 %


Another hand[Y / N] ? Y
Here is your hand :
JS QH 4D 4C KD 2C 5D 8S 3C 8D 6H 10D 7C
This hand is worth 7 points.
Running simulation......

The estimated probability based on 500 simulated hands :
Pass: 35.2
Part Score : 45.8 %
Game : 19 %
Small Slam : 0 %
Grnad Slam : 0 %


Another hand[Y / N] ? N

C : \Users\sab38\source\repos\program_1\Debug\program_1.exe(process 14640) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/