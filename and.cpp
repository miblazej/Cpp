// uzycie operatora koniunkcji logicznej
#include<iostream>
const int ArSize = 6;
int main()
{
	using namespace std;
	float naaq[ArSize];
	cout << "Podaj wartosci WPNW (Wspolczynniki Podatnosci na Wplywy) "
		<< "\n swoich sasiadow. Dzialanie programu konczy sie "
		<< "pod podaniu \n " << ArSize << " wartosci"
		<< "lub po podaniu wartosci ujemniej.\n";
	int i = 0;
	float temp;
	cout << "Wartosc pierwsza: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "Nastepna wartosc: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "Brak danych -pa pa.\n";
	else
	{
		cout << "Podaj swoj WPNW: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " twoi sasiedzi sa badziej podatni na wplywy\n"
			<< " niz ty\n";
	}
	return 0;
}