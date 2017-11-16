#include "Blackjack.h"
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	srand(time(0));

	Blackjack* game[1000];
	int n=1,k = 0;
	unsigned int st, status;

	while( n == 1)
	{
		if(k > 0) 
		{
			cout<<endl<<"������� ��� ���? (1 - ��, 0 - ���)"<<endl;
			cin>>n;
		}

		cout<<"���� ������?"<<endl;
		cin>>st;
		
		if(n == 1) 
		{
			game[k] = new Blackjack();
			status = game[k]->play(st);
			k++;
			if(status == 1) cout<<"����� ����:( ���� "<< st <<"$ ������ ����"<<endl;
			else if(status == 2) cout<<"�����������:) �� ��������: "<< st <<"$ �����: "<<st*2<<"$"<<endl;
			else if(status == 3) cout<<"�� �� ��������, �� � �� ���������. "<<st<<"$ �������� � ���"<<endl;
			else if(status == 5) cout<<"�����������:) �� �������� (3x): "<< st <<"$ �����: "<<st*3<<"$"<<endl;
			else if(status == 6) cout<<"�����������:) �� �������� (����): "<< st*2 <<"$ �����: "<<st*4<<"$"<<endl;
		}
	}

	system("pause");
	return 0;
}