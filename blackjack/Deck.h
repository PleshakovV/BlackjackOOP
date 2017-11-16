#include "Card.h"
#include <iostream>
using namespace std;

#ifndef DECK_H
#define DECK_H

class Deck
{
	Card* card[52];
public:
	Deck();
	Card* get_card(int index);
};

#endif