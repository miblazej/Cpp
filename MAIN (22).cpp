// prawdopodobienstwo wygranej
#include<iostream>
long double probability(unsigned numbers, unsigned picks, unsigned power);

int main()
{
	using namespace std;
	double total, choices, power;
	cout << "Podaj najwieksza liczbe jaka mozna wybraz oraz\n liczbe skreslen oraz liczbe na power ball\n";
	while ((cin >> total >> choices >> power) && choices <= total)
	{
		cout << "Szansa wygranej to jeden do ";
		cout << probability(total, choices, power);
		cout << ".\n";
		cout << "Nastepne trzy liczby (q, aby zakonczyc): ";
	}

	cout << "do widzenia\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned power)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result * power;
}