#include<iostream>
#include<string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Donator
{
	string nazwisko;
	double kwota;
};

int main()
{
	char filename[20] = "baza.txt";
	ifstream inFile;
	inFile.open(filename);
	if (inFile.is_open())
	{
		cout << "Otwarte" << endl;
	}
	
	
	string str;
	int a;
	inFile >> a;
	Donator* tab = new Donator[a];
	bool flag = true;
	bool name = true;
	int i = 0;
	while (getline(inFile, str))
	{
		if (flag) {
			flag = !flag;
			continue;
		}
		if (name) {
			(tab + i)->nazwisko = str;
			name = false;
		}
		else
		{
			(tab + i)->kwota = stoi(str);
			name = true;
			i++;
		}
	}


	cout << "Nasi wspaniali sponsorzy\n";
	for (int i = 0; i < a; i++) {
		if ((tab + i)->kwota >= 10000) {
			cout << (tab + i)->nazwisko << "   " << (tab + i)->kwota << endl;
		}
	}
	cout << "\nWspaniali sponsorzy\n";
	for (int i = 0; i < a; i++) {
		if ((tab + i)->kwota > 1000 && (tab + i)->kwota < 10000) {
			cout << (tab + i)->nazwisko << "   " << (tab + i)->kwota << endl;
		}
	}
	cout << "\nSponsorzy\n";
	for (int i = 0; i < a; i++) {
		if ((tab + i)->kwota < 1000) {
			cout << (tab + i)->nazwisko << "   " << (tab + i)->kwota << endl;
		}
	}
	return 0;
}