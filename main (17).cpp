// funckje z obiektami typu array (c++11)
#include <iostream>
#include <array>
#include <string>

// dane stale
const int Seasons = 4;
const char* Snames[Seasons] = { "Wiosna","Lato","Jesien","Zima" };

struct wyd {
	double wydatki[4];
};

//funckja modyfikujaca tablcie typu array
void fill(wyd * a);
// funckja przetwarzajaca tablice typu array bez interwencji w jej zawartosc
void show(wyd * a);

int main()
{
	wyd expenses[4];
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(wyd * a)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << " Podaj sume wydatkow za " << *(Snames + i) << "\n";
		cin >> a->wydatki[i];
	}
}

void show(wyd * a)
{
	using namespace std;
	double total = 0.0;
	cout << "\nWydatki\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << a->wydatki[i] << " zl" << endl;
		total += a->wydatki[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}