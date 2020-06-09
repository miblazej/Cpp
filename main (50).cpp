// Struktura batonik ma trzy pola marka, waga(ulamki) kalorie. Mocha Munch 2.3 350 wyswietl
#include<iostream>
#include<string>

using namespace std;

struct Batonik
{
	string marka;
	double waga;
	int kalorie;
};

int main()
{
	Batonik* ps = new Batonik{ "Mocha Munch", 2.3, 350 };
	cout << "Marka batonika: " << ps->marka << "\n" << "Waga: " << ps->waga << "g\n" << "Kalorie: " << ps->kalorie << "kcal\n";
	return 0;
}