#include "Deckpile.h"

Deckpile::Deckpile()
{
	this->give = -1;
	// ������� � ������ 4 ������
	for(unsigned int i = 0; i < 4; ++i) 
	{
		deck[i]= new Deck();
	}

	this->add_cards();
	this->shuffle();
}

void Deckpile::add_cards()
{
	// ���������� � ������ ��� ����� �� 4 �����
	for(unsigned int i = 0; i < 4; ++i) 
	{
		for(unsigned int j = 0; j < 52; ++j) 
		{
			this->cards.push_back( deck[i]->get_card(j) );
		}
	}
}

void Deckpile::shuffle()
{
	random_shuffle(this->cards.begin(), this->cards.end());
}

Card* Deckpile::give_card()
{
	this->give++;
	return cards[give];
}