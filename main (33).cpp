#include<iostream>

using namespace std;

void showmenu();


int main()
{
	char ch;
	showmenu();
	while (cin.get(ch)) {
		switch (ch)
		{
		case 'a':
			cout << "Oddawaj dziwko hais\n";
			break;
		case 'b':
			cout << "Kim jest ten chuj albo ta kurwa która nie placi za 150 000 000 pomysl\n";
			break;
		case 'c':
			cout << "Dlaczego ta kurwa ciagle mi jest winna pieniadze\n";
			break;
		case 'd':
			cout << "Taylor ja potrzebuje pieniedzy na rozwoj osobisty\n";
			break;
		case 'e':
			cout << "Co to za producent co nie kradnie \n";
			break;
		default:
			cout << "Prosze podac od a do e:";
		}
		showmenu();
	}
	return 0;
}

void showmenu(void) {
	cout << "a) Dziendobry		b) Kim jest Taylor Swift\n"
		<< "c) Dzlaczego ciagle nie oddala mi pieniedzy d) Dlaczego potrzebuje pieniedzy\n"
		<< "e) Producenci to swinie\n";
}