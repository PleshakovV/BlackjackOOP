#include "Card.h"

Card::Card()
{
	this->face = true;
}

void Card::set_value(int value)
{
	this->value = value;
}

void Card::set_suit(int suit)
{
	this->suit = suit;
}

void Card::set_rank(int rank)
{
	this->rank = rank;
}

int Card::get_value()
{
	return this->value;
}

int Card::get_suit()
{
	return this->suit;
}

int Card::get_rank()
{
	return this->rank;
}

void Card::set_face(bool face)
{
	this->face = face;
}

bool Card::get_face()
{
	return this->face;
}

char* Card::char_value(int value)
{
	char *sim = new char[10];
	if (value == 0) sim = "2";
	else if (value == 1) sim = "3";
	else if (value == 2) sim = "4";
	else if (value == 3) sim = "5";
	else if (value == 4) sim = "6";
	else if (value == 5) sim = "7";
	else if (value == 6) sim = "8";
	else if (value == 7) sim = "9";
	else if (value == 8) sim = "10";
	else if( value == 9) sim = "J";
	else if( value == 10) sim = "Q";
	else if( value == 11) sim = "K";
	else if( value == 12) sim = "A";
	return sim;
}