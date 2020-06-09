// uzycie operatora & do okreslenia adressu
#include <iostream>

int main()
{
	using namespace std;
	int donouts = 6;
	double cups = 2.5;

	cout << "Wartosc zmiennej donuts = " << donouts;
	cout << ", a adres tej zmiennej = " << &donouts << " oraz rozmiar tej zmiennej to " << sizeof(donouts) << endl;
	cout << "wartosc zmiennej cups = " << cups;  
	cout << ", a adres tej zmiennej = " << &cups << " oraz rozmiar tej zmiennej to " << sizeof(cups) << endl;
	return 0;
}