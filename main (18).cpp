// funckje z obiektami typu array (c++11)
#include <iostream>
#include <array>
#include <string>

// dane stale
const int Seasons = 4;
const char * Snames[Seasons] = { "Wiosna","Lato","Jesien","Zima" };

//funckja modyfikujaca tablcie typu array
void fill(double * wyd);
// funckja przetwarzajaca tablice typu array bez interwencji w jej zawartosc
void show(double * wyd);

int main()
{
	double expenses[4];
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(double* wyd)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << " Podaj sume wydatkow za " << *(Snames + i) << "\n";
		cin >> *(wyd+i);
	}
}

void show(double* wyd)
{
	using namespace std;
	double total = 0.0;
	cout << "\nWydatki\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << *(wyd + i) << " zl" << endl;
		total += *(wyd + i);
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}