#include <iostream>
using namespace std;

#ifndef CARD_H
#define CARD_H

class Card
{
	unsigned int value;
	unsigned int suit;
	unsigned int rank;
	char* val;
	bool face;
public:
	Card();
	char* char_value(int value);
	void set_value(int value);
	void set_suit(int suit);
	void set_rank(int rank);
	int get_value();
	int get_suit();
	int get_rank();
	void set_face(bool face);
	bool get_face();
};

#endif