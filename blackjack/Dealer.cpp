#include "Dealer.h"

Dealer::Dealer()
{
	this->result = 0;
}

Card* Dealer::take_card()
{
	return Dealer::give_card();
}

void Dealer::add_card(Card* card)
{
	this->result += card->get_rank();
	this->d_hand.add_card( card );
}

void Dealer::get_card()
{
	this->d_hand.get_card();
}

int Dealer::get_result()
{
	return this->result;
}

void Dealer::print()
{
	system("cls");
	cout<<"Карты дилера"<<endl;
	Dealer::get_card();
	cout<<"Дилера очки: "<< Dealer::get_result() <<endl<<endl;
	cout<<"Ваши карты"<<endl;
	Player::get_card();
	cout<<"Ваши очки: "<< Player::get_result() <<endl<<endl;
}

void Dealer::begin()
{
	Player::add_card( this->take_card() );
	Dealer::add_card( this->take_card() );
	Player::add_card( this->take_card() );
	cardface = this->take_card();
	cardface->set_face(false);
	Dealer::add_card( cardface );
}

void Dealer::p_add_card()
{
	Player::add_card( this->take_card() );
}


bool Dealer::seven_card()
{
	bool ka = this->d_hand.seven_card();
	return ka;
}


int Dealer::status()
{
	// 0 - продолжаем игру
	// 1 - победа диллера
	// 2 - победа игрока
	// 3 - ничья
	// 4 - У дилера 777 
	// 5 - У игрока 777 
	unsigned int error = 0;

	if(this->get_result() == 21 && Player::get_result() != 21) error = 1;
	else if(Player::get_result() == 21 && this->get_result() != 21) error = 2;
	else if(Player::get_result() == 21 && this->get_result() == 21) error = 3;
	else if( this->get_result() > 21 && Player::get_result() < 21 ) error = 2;
	else if( Player::get_result() > 21 && this->get_result() < 21 ) error = 1;
	else if( Player::get_result() > 21 && this->get_result() > 21 ) error = 3;

	return error;
}

int Dealer::status(int n)
{
	unsigned int error = 0;
	if(this->get_result() == 21 && Player::get_result() != 21 && this->seven_card() == true) error = 4;
	else if(this->get_result() != 21 && Player::get_result() == 21 && Player::seven_card() == true) error = 5;
	else if( Player::get_result() > this->get_result() && Player::get_result() < 21 && this->get_result() < 21) error = 2;
	else if( Player::get_result() < this->get_result() && Player::get_result() < 21 && this->get_result() < 21) error = 1;
	else if(Player::get_result() == 21 && this->get_result() == 21) error = 3;
	else if(Player::get_result() == this->get_result() && Player::get_result() < 21 && this->get_result() < 21) error = 3;
	else if(Player::get_result() == this->get_result()) error = 3;
	else if( Player::get_result() > 21 && this->get_result() > 21 ) error = 3;
	else if( this->get_result() > 21 && Player::get_result() < 21 ) error = 2;
	else if( Player::get_result() > 21 && this->get_result() < 21 ) error = 1;
	else if( Player::get_result() == 21 && this->get_result() != 21 ) error = 2;
	else if( Player::get_result() != 21 && this->get_result() == 21 ) error = 1;
	return error;
}

void Dealer::logic()
{
	this->cardface->set_face(true);

	while(this->get_result() <= 17)
	{
		if( this->get_result() < 17 ) Dealer::add_card( this->take_card() );
		else if( this->get_result() == 17 ) {
			int random = rand() % 1;
			if(random == 1) Dealer::add_card( this->take_card() );
			break;
		}
		
		this->print();
		
	}
}