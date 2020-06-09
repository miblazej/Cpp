// funckje z obiektami typu array (c++11)
#include <iostream>
#include <array>
#include <string>

// dane stale
const int Seasons = 4;
const std::array<std::string, Seasons> Snames = { "Wiosna","Lato","Jesien","Zima" };

//funckja modyfikujaca tablcie typu array
void fill(std::array<double, Seasons>* pa);
// funckja przetwarzajaca tablice typu array bez interwencji w jej zawartosc
void show(std::array<double, Seasons> da);

int main()
{
	std::array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(std::array<double, Seasons> *pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << " Podaj sume wydatkow za " << Snames[i] << "\n";
		cin >> (*pa)[i];
	}
}

void show(std::array<double, Seasons> da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nWydatki\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": " << da[i] << " zl" << endl;
		total += da[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}