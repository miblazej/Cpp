#include <iostream>
#include<string>

using namespace std;


struct zpdw {
	string imie;
	string stanowisko;
	string pseudozpdw;
	int preferencje;

	
};

void showmenu();
zpdw* init();
void printa(zpdw* a);
void printb(zpdw* a);
void printc(zpdw* a);
void printd(zpdw* a);

int main()
{
	zpdw* l;
	l = init();
	showmenu();
	char ch;
	while (cin.get(ch) && ch != 'q') {
		switch (ch)
		{
		case 'a':
			printa(l);
			break;
		case 'b':
			printb(l);
			break;
		case 'c':
			printc(l);
			break;
		case 'd':
			printd(l);
			break;
		default:
			break;
		}
		showmenu();
	}
	

	return 0;
}

void showmenu()
{
	cout << "Zakon programistow Dobrej Woli\n"
		<< "a.lista wedlug imion b.lista wedlug stanowisk\n"
		<< "c.lista wedlug psedunimow d.lista wedlug preferencji\n"
		<< "q.koniec" << endl;
}

zpdw* init()
{
	zpdw* list = new zpdw[5];
	list->imie = { "Andrzej" };
	list->preferencje = 2;
	list->stanowisko = { "Glowny kokainista" };
	list->pseudozpdw = { "Andrew" };
	(list + 1)->imie = { "Szymon" };
	(list + 1)->stanowisko = { "Programista" };
	(list + 1)->pseudozpdw = { "Krym" };
	(list + 1)->preferencje = 1;
	(list + 2)->imie = { "Szymon 2" };
	(list + 2)->stanowisko = { "Programista Dziwek" };
	(list + 2)->pseudozpdw = { "Ciagne pale" };
	(list + 2)->preferencje = 2;
	(list + 3)->imie = { "Bartosz" };
	(list + 3)->stanowisko = { "Programista Licealista" };
	(list + 3)->pseudozpdw = { "Plasty" };
	(list + 3)->preferencje = 2;
	(list + 4)->imie = { "Michal" };
	(list + 4)->stanowisko = { "Programista" };
	(list + 4)->pseudozpdw = { "Michal" };
	(list + 4)->preferencje = 1;
	return list;
}
void printa(zpdw* a) {
	for (int i = 0; i < 5; i++)
		cout << (a+i)->imie << "\n";
}

void printb(zpdw* a) {
	for (int i = 0; i < 5; i++)
		cout << (a + i)->stanowisko << "\n";
}

void printc(zpdw* a) {
	for (int i = 0; i < 5; i++)
		cout << (a + i)->pseudozpdw << "\n";
}

void printd(zpdw* a) {
	for (int i = 0; i < 5; i++)
		switch ((a + i)->preferencje)
		{
		case 0:
			cout << (a + i)->imie << endl;
			break;
		case 1:
			cout << (a + i)->stanowisko << endl;
			break;
		case 2:
			cout << (a + i)->pseudozpdw << endl;
			break;
		default:
			break;
		}
}