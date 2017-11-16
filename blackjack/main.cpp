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
			cout<<endl<<"Сыграть еще раз? (1 - ДА, 0 - НЕТ)"<<endl;
			cin>>n;
		}

		cout<<"Ваша ставка?"<<endl;
		cin>>st;
		
		if(n == 1) 
		{
			game[k] = new Blackjack();
			status = game[k]->play(st);
			k++;
			if(status == 1) cout<<"Очень жаль:( Ваши "<< st <<"$ теперь наши"<<endl;
			else if(status == 2) cout<<"Поздравляем:) Вы выиграли: "<< st <<"$ Всего: "<<st*2<<"$"<<endl;
			else if(status == 3) cout<<"Вы не выиграли, но и не проиграли. "<<st<<"$ остаются у вас"<<endl;
			else if(status == 5) cout<<"Поздравляем:) Вы выиграли (3x): "<< st <<"$ Всего: "<<st*3<<"$"<<endl;
			else if(status == 6) cout<<"Поздравляем:) Вы выиграли (ДАБЛ): "<< st*2 <<"$ Всего: "<<st*4<<"$"<<endl;
		}
	}

	system("pause");
	return 0;
}