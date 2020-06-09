// Cwiczenie pierwsze, zapytaj o imie nazwisko ocene wiek oraz wyswietl te wiadomosci na ekranie komputera, zwroc uwage na funckje getline().
#include<iostream>

using namespace std;

int main()
{
	char imie[40];
	char nazwisko[40];
	int ocena, wiek;
	cout << "Jak masz na imie? ";
	cin.getline(imie, 40);
	cout << "Jak sie nazywasz? ";
	cin.getline(nazwisko, 40);
	cout << "Ile masz lat? ";
	cin >> wiek;
	cout << "Na jaka ocene zaslugujesz? ";
	cin >> ocena;
	ocena--;
	cout << "Nazwisko: " << nazwisko << " , " << imie << endl;
	cout << "Ocena: " << ocena << "\n" << "Wiek: " << wiek << endl;
	return 0;
}