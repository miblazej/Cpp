// Podaj dwie liczby calkowite a program policzy sume liczb pomiedzy nimi zaloz ze pierwsza liczba jest mniejsza
#include <iostream>
int main()
{
	using namespace std;

	int a, b;
	cout << "Podaj mniejsza z liczb\n";
	cin >> a;
	cout << "Podaj wieksza z liczb\n";
	cin >> b;
	int suma = 0;
	for (a++; a < b; a++) {
		suma += a;
	}
	cout << "Suma liczb pomiedzy to " << suma << endl;
	return 0;
}