#include "Hand.h"

Hand::Hand()
{
	cout<<"Рука"<<endl;
}

void Hand::add_card(Card* card)
{
	cards.push_back( card );
}

void Hand::get_card()
{
	for(unsigned int i = 0; i < cards.size(); ++i)
	{
		if( cards[i]->get_value() != 8) cout<<"+--+ "; else cout<<"+---+ ";
	}
	cout<<endl;

	for(unsigned int i = 0; i < cards.size(); ++i)
	{
		if(cards[i]->get_face() == true)
			cout<<"|" << cards[i]->char_value( cards[i]->get_value() ) << (char)(cards[i]->get_suit()+3) << "| ";
		else cout<<"|??| ";
	}
	cout<<endl;

	for(unsigned int i = 0; i < cards.size(); ++i)
	{
		if( cards[i]->get_value() != 8) cout<<"+--+ "; else cout<<"+---+ ";
	}
	cout<<endl;
}

bool Hand::seven_card()
{
	bool ka = true;

	for(int i = 0; i < cards.size(); i++)
	{
		if(cards[i]->get_value() != 5) ka = false;
	}

	return ka;
}