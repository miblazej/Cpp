#include <iostream>
#include <string>

using namespace std;

struct pudlo
{
	string producent;
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};

void show(pudlo c);
void objetosc(pudlo* c);

int main()
{
	using namespace std;
	pudlo a;
	a.dlugosc = 100;
	a.szerokosc = 100;
	a.wysokosc = 500;
	a.producent = "Mariana Bolko";
	objetosc(&a);
	show(a);
	return 0;
}

void show(pudlo c)
{
	cout << " Producent " << c.producent << " wysokosc " << c.wysokosc << " szerokosc " << c.szerokosc << " dlugosc " << c.dlugosc << " objetosc " << c.objetosc << endl;
}

void objetosc(pudlo* c)
{
	c->objetosc = c->dlugosc * c->szerokosc * c->wysokosc;
}