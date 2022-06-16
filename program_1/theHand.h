#pragma once
#include<iostream>
using namespace std;
class theHand
{
	
	public:
		theHand(string shuffled_Duck[52], string my_hand[13], string your_hand[13]) {
			for (int i = 0; i < 13; i++) {
				my_hand[i] = shuffled_Duck[i];
				your_hand[i] = shuffled_Duck[i + 13];
			}
		}

		int worth(string hand[13]) {
			int ttl_Points = 0;
			int Clubs = 0, Spads = 0, Hearts = 0, Diamonds = 0;
			for (int i = 0; i < 13; i++) {

				switch (hand[i][0])
				{
					case 'A': {

						ttl_Points = ttl_Points + Ace;
						break; }
					case 'K': {
						ttl_Points = ttl_Points + King;
						break; }
					case 'Q': {
						ttl_Points = ttl_Points + Queen;
						break; }
					case 'J': {
						ttl_Points = ttl_Points + Jack;
						break; }

				}

				switch (hand[i][hand[i].length() - 1]) {

					case 'S':
					{
						Spads++;
						break;
					}
					case 'C':
					{
						Clubs++;
						break;
					}
					case 'D':
					{
						Diamonds++;
						break;
					}
					case 'H':
					{
						Hearts++;
						break;
					}

				}

			}
			if (Spads <= 2) {
				switch (Spads) {
					case 0:
						ttl_Points = ttl_Points + 5;
						break;
					case 1:
						ttl_Points = ttl_Points + 2;
						break;
					case 2:
						ttl_Points = ttl_Points + 1;
						break;
				}
			}
			else if (Hearts <= 2) {
				switch (Hearts) {
					case 0:
						ttl_Points = ttl_Points + 5;
						break;
					case 1:
						ttl_Points = ttl_Points + 2;
						break;
					case 2:
						ttl_Points = ttl_Points + 1;
						break;
				}
			}
			else if (Diamonds <= 2) {
				switch (Diamonds) {
					case 0:
						ttl_Points = ttl_Points + 5;
						break;
					case 1:
						ttl_Points = ttl_Points + 2;
						break;
					case 2:
						ttl_Points = ttl_Points + 1;
						break;
				}
			}
			else if (Clubs <= 2) {
				switch (Diamonds) {
					case 0:
						ttl_Points = ttl_Points + 5;
						break;
					case 1:
						ttl_Points = ttl_Points + 2;
						break;
					case 2:
						ttl_Points = ttl_Points + 1;
						break;
				}
			}
			return ttl_Points;
		}


	private:
		int Ace = 4, King = 3, Queen = 2, Jack = 1;

};


