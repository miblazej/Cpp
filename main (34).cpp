#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<double, 10> tab;
	int stash = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << " Podaj liczb, nie liczba konczy wczytywanie danych: ";
		cin >> stash;
		if (cin.fail())
			break;
		tab[i] = stash;
	}
	
	int a = 0;
	int sum = 0;
	for (double x : tab)
	{
		sum += x;
		a++;
	}

	double mean = sum / a;

	for (double x : tab)
		if (x > mean)
			cout << " Wartosc " << x << " jest wieksza od sredniej podanej w tabeli\n";

	return 0;
}