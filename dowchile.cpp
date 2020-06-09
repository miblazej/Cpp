// petal z kontrola warunku na koniec
#include <iostream>
int main()
{
	using namespace std;
	int n;

	do {
		cout << "Podaj moja ulubiona liczbe ";
		cin >> n;
	} while (n != 7);
	cout << "Zgadales moja ulubiona liczba to " << n << endl;
	return 0;
}