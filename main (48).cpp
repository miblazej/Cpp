// Strruktura o pizzy oraz pobranie danych i wyswietlenie przy pomocy obiektow cin
#include<iostream>

struct Pizza
{
	char pizza[40];
	int srednica;
	int waga;
};

using namespace std;

int main()
{
	Pizza* wp = new Pizza;
	cout << "Podaj firme produkujaca pizze" << endl;
	cin.getline(wp->pizza, 40);
	cout << "Podaj srednice pizzy" << endl;
	cin >> wp->srednica;
	cout << "Podaj wage pizzy" << endl;
	cin >> wp->waga;
	cout << "Marka pizzy to " << wp->pizza << " a srednica to " << wp->srednica << " a waga to " << wp->waga << endl;
	delete[] wp;
	return 0;

}