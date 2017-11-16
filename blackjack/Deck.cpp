#include "Deck.h"

Deck::Deck()
{
	// создаем в колоде 52 карты
	for(unsigned int i = 0; i < 52; ++i) 
	{
		card[i]= new Card();
		card[i]->set_value( i % 13 );
		card[i]->set_suit( i % 4 );
		if ( card[i]->get_value() <= 8 ) card[i]->set_rank( card[i]->get_value() + 2 );
		else if ( card[i]->get_value() >= 9 && card[i]->get_value() <= 11 ) card[i]->set_rank( 10 );
		else if( card[i]->get_value() == 12 ) card[i]->set_rank( 11 );
	}
}

Card* Deck::get_card(int index)
{
	return this->card[index];
}