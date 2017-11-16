#include "Card.h"
#include <vector>
#include <iostream>
using namespace std;

#ifndef HAND_H
#define HAND_H

class Hand
{
	vector <Card*> cards;
public:
	Hand();
	void add_card(Card* card);
	void get_card();
	bool seven_card();
};

#endif
