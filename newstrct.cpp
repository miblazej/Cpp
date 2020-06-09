// operator new oraz struktury
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable* ps = new inflatable; // alokacja pamieci na strukture
	cout << "Podaj nazwe dmuchanej zabawki: ";
	cin.get(ps->name, 20); // metoda 1
	cout << "Podaj objetosc w stopach szesciennych: ";
	cin >> (*ps).volume;
	cout << "Podaj cene (PLN): ";
	cin >> ps->price;
	cout << "Nazwa: " << (*ps).name << endl;
	cout << "Objetosc: " << ps->volume << " stop szesciennych\n";
	cout << "Cena: " << ps->price << " PLN" << endl;
	delete ps;
	return 0;
}