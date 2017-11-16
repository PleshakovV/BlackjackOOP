#include "Hand.h"
#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	Hand p_hand;
	int result;
public:
	Player();
	void add_card(Card* card);
	void get_card();
	int get_result();
	bool seven_card();
};

#endif