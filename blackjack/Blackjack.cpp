#include "Blackjack.h"

Blackjack::Blackjack()
{
	system("cls");
}

int Blackjack::play(int stavka)
{
	dealer.begin();
	dealer.print();

	int status = 0;
	int n = 1;
	int doub = false;

	while(dealer.status()==0 && n == 1) {
			cout<<"����� ��� �����? (1 - ��, 0 - ���, 2 - ����)"<<endl;
			cin>>n;
		if(n==1 || n==2) 
		{
			dealer.p_add_card();
			dealer.print();
			if(n == 2) 
			{
				dealer.logic();
				doub = true;
				n = 0;
				if(dealer.status(n)==1) {cout<<"�� ��������� (����)!"<<endl;status=1;}
				else if(dealer.status(n)==2) {cout<<"�� �������� (����)!"<<endl;status=6;}
				else if(dealer.status(n)==3) {cout<<"����� (����)!"<<endl;status=3;}
			}
		} else {
			dealer.logic();
			if(dealer.status(n)==1) {cout<<"�� ���������!"<<endl;status=1;}
			else if(dealer.status(n)==2) {cout<<"�� ��������!"<<endl;status=2;}
			else if(dealer.status(n)==3) {cout<<"�����!"<<endl;status=3;}
			else if(dealer.status(n)==4) {cout<<"�� ���������! � ������ 777"<<endl;status=4;}
			else if(dealer.status(n)==5) {cout<<"�� ��������! � ��� 777"<<endl;status=5;}
		} 
	}

	dealer.cardface->set_face(true);

	if(dealer.status()==1 && doub == false && n != 0) {cout<<"�� ���������!"<<endl;status=1;}
	else if(dealer.status()==2 && doub == false && n != 0) {cout<<"�� ��������!"<<endl;status=2;}
	else if(dealer.status()==3 && doub == false && n != 0) {cout<<"�����!"<<endl;status=3;}

	return status;
}