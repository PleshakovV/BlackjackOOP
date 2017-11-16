#include "Player.h"
#include "Deckpile.h"
#include <iostream>
using namespace std;

#ifndef DEALER_H
#define DEALER_H

class Dealer : public Player, public Deckpile
{
	int result;
	Hand d_hand;
public:
	Card* cardface;
	Dealer();
	Card* take_card();
	void begin();
	void add_card(Card* card);
	void get_card();
	int get_result();
	void print();
	int status();
	int status(int n);
	void p_add_card();
	void logic();
	bool seven_card();
};

#endif
