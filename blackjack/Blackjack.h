#include <iostream>
using namespace std;
#include "Dealer.h"
#include "Player.h"
#include "Hand.h"
#include "Deckpile.h"

#ifndef BLACKJACK_H
#define BLACKJACK_H

class Blackjack
{
	Dealer dealer;
public:
	Blackjack();
	int play(int stavka);
};

#endif