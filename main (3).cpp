// Konwersja lat swietlnych na jednostki astronomiczne
#include <iostream>

int main(void)
{
	using namespace std;
	cout << "Podaj liczbe lat swietlnych " << endl;
	double lata;
	cin >> lata;
	cout << lata << " lat swietlynch = " << lata * 63240 << " jednostek astronomicznych" << endl;
	return 0;
}