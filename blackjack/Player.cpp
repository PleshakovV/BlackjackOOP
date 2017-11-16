#include "Player.h"

Player::Player()
{
	this->result = 0;
}

void Player::add_card(Card* card)
{
	this->result += card->get_rank();
	this->p_hand.add_card( card );
}

void Player::get_card()
{
	this->p_hand.get_card();
}

int Player::get_result()
{
	return this->result;
}

bool Player::seven_card()
{
	bool ka = this->p_hand.seven_card();
	return ka;
}