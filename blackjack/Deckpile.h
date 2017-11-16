#include "Deck.h"
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

#ifndef DECKPILE_H
#define DECKPILE_H

class Deckpile
{
	int give;
	vector <Card*> cards;
	Deck* deck[4];
public:
	Deckpile();
	void add_cards();
	void shuffle();
	Card* give_card();
};

#endif