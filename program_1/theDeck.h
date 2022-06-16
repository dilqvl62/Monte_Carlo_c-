#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>		
using namespace std;
class theDeck
{
public:
	theDeck(string array[52])
	{
		for (int i = 0; i < 52; i++) {
			deck[i] = array[i];
		}
	}

	void shuffle(string arr[52]) {
		string temp = "";
		int randomIndex = 0;
		srand(time(0));
		for (int i = 0; i < 52; i++) {
			randomIndex = rand() % 52;
			temp = arr[i];
			arr[i] = arr[randomIndex];
			arr[randomIndex] = temp;

		}
	}

private:

	string deck[52];
};

