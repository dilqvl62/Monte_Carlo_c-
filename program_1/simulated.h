#pragma once
#include<iostream>
#include "theDeck.h"
#include "theHand.h"
using namespace std;
class simulated
{
	public:
		simulated() :hands(500) {};


		void tally(string shffledhnd[52], string yourhnd[13], string myhnd[13]) {
			
			
			double  pass = 0, part_score = 0, Game = 0, small_Slam = 0, Grand_Slam = 0;


			
			
			cout << "The estimated probability based on " << hands << " simulated hands: " << endl;
			for (int t = 0; t < 500; t++) {

				theHand hand(shffledhnd, myhnd, yourhnd);

					if ((hand.worth(myhnd) + hand.worth(yourhnd)) < 20) {
						pass++; 
					}
				else
					if ((hand.worth(myhnd) + hand.worth(yourhnd)) >= 20 && (hand.worth(myhnd) + hand.worth(yourhnd)) <= 25) {
						part_score++;
					}
				else
						if ((hand.worth(myhnd) + hand.worth(yourhnd)) >= 26 && (hand.worth(myhnd) + hand.worth(yourhnd)) <= 31) {
							Game++;
						}
				else
							if ((hand.worth(myhnd) + hand.worth(yourhnd)) >= 32 && (hand.worth(myhnd) + hand.worth(yourhnd)) <= 35) {
								small_Slam++;
							}
							else
								if ((hand.worth(myhnd) + hand.worth(yourhnd)) >= 36) {
									Grand_Slam++;
								}
				theDeck tDeck(shffledhnd);
				tDeck.shuffle(shffledhnd);
			}
			cout << "Pass: " << (pass/hands)*100 << endl;
			cout << "Part Score: " << (part_score/hands)*100 <<"%"<< endl;
			cout << "Game: " << (Game/hands)*100 <<"%"<< endl;
			cout << "Small Slam: " << (small_Slam/hands)*100 << "%"<<endl;
			cout << "Grnad Slam: " << (Grand_Slam/hands)*100 <<"%"<< endl;
		}

    private:
	int hands;
	
};

