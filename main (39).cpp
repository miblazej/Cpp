// stworz stukture car string marka int rok produkcji, zapytaj ile skatalogowac a nastepnie wpisz nazwy oraz lata produkcji i wyswietl dane
#include<iostream>
#include<string>

using namespace std;

struct car
{
	string nazwa;
	int rok_produkcji;
};

int main()
{
	int tab;
	cout << "Podaj liczbe samochodow do skatalogowania ?" << endl;
	cin >> tab;
	cin.get();
	car* samochody = new car[tab];
	for (int i = 0; i < tab; i++) {
		cout << "Podaj marke samochodu:";
		getline(cin, samochody[i].nazwa);
		cout << "Podaj rok produkcji:";
		cin >> samochody[i].rok_produkcji;
		cin.get();
	}
	for (int i = 0; i < tab; i++) {
		
		cout << samochody[i].nazwa << "\t\t";
		cout << samochody[i].rok_produkcji << "\n";
	}
	delete[] samochody;
	return 0;
}