// Struktura batonik ma trzy pola marka, waga(ulamki) kalorie. Mocha Munch 2.3 350 wyswietl Dodaj tablice oraz ja wype³nij
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
	Batonik* ps = new Batonik[3];
	ps->marka = "Mocha Munch";
	ps->waga = 2.3;
	ps->kalorie = 350;
	(ps + 1)->marka = " Snikers";
	(ps + 1)->waga = 50;
	(ps + 1)->kalorie = 500;
	(ps + 2)->marka = "Mars";
	(ps + 2)->waga = 501;
	(ps + 2)->kalorie = 5001;

	cout << "Marka batonika: " << ps->marka << "\n" << "Waga: " << ps->waga << "g\n" << "Kalorie: " << ps->kalorie << "kcal\n";
	cout << "Marka batonika: " << (ps+1)->marka << "\n" << "Waga: " << (ps + 1)->waga << "g\n" << "Kalorie: " << (ps + 1)->kalorie << "kcal\n";
	cout << "Marka batonika: " << (ps + 2)->marka << "\n" << "Waga: " << (ps + 2)->waga << "g\n" << "Kalorie: " << (ps + 2)->kalorie << "kcal\n";
	return 0;
}