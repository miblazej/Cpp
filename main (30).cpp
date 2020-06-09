#include<iostream>
#include<string>

using namespace std;

struct Donator
{
	string nazwisko;
	double kwota;
};

int main()
{
	cout << "Podaj liczbe wplacajacych\n";
	int a;
	cin >> a;
	cin.get();
	Donator* tab = new Donator[a];
	for (int i = 0; i < a; i++) {
		cout << "Podaj nazwisko wplacajacego: ";
		getline(cin, (tab + i)->nazwisko);
		cout << "Podaj kwote wplaty: ";
		cin >> (tab + i)->kwota;
		cin.get();
	}
	cout << "Nasi wspaniali sponsorzy\n";
	for (int i = 0; i < a; i++) {
		if ((tab + i)->kwota >= 10000) {
			cout << (tab + i)->nazwisko << "   " << (tab + i)->kwota;
		}
	}
	cout << "\nWspaniali sponsorzy\n";
	for (int i = 0; i < a; i++) {
		if ((tab + i)->kwota > 1000 && (tab+i)->kwota < 10000) {
			cout << (tab + i)->nazwisko << "   " << (tab + i)->kwota;
		}
	}
	cout << "\nSponsorzy\n";
	for (int i = 0; i < a; i++) {
		if ((tab + i)->kwota < 1000) {
			cout << (tab + i)->nazwisko << "   " << (tab + i)->kwota;
		}
	}
	return 0;
}