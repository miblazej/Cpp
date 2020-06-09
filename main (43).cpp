// Napsiz program ktory dodda liczby az nie podasz mu zera
#include <iostream>

int main()
{
	using namespace std;
	int a;
	int suma = 0;
	do {
		cout << " Podaj liczbe: \n";
		cin >> a;
		suma += a;
	} while (a != 0);
	cout << "Suma wszystkich liczb to " << suma;
	return 0;
}