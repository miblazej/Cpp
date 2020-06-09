// slowo const i funkcje obslugujace tablice
#include <iostream>

const int Max = 5;

// protoptypy
double * fill_array(double * start, int limit);
void show_array(const double * start, double * end);
void revalue(double r, double * start, double * end);

int main()
{
	using namespace std;
	double properties[Max];

	double * end = fill_array(properties, Max);
	show_array(properties, end);
	if (properties != end)
	{
		cout << "Podaj czynnik wartosci: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Niepoprawna wartosc podaj liczbe ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Gotowe.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double *start , int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Podaj wartosc nr " << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie danych przerwane. \n";
			break;
		}
		else if (temp < 0)
			break;
		*(start+i)= temp;
	}
	return start+i; 
}

void show_array(const double * start, double * end)
{
	using namespace std;
	for (int i = 0; (start+i) != end ; i++)
	{
		cout << "Nieruchomosc nr " << (i + 1) << ": ";
		cout << *(start+i) << endl;
	}
}

void revalue(double r, double * start, double * end )
{
	for (int i = 0; (start + i) != end; i++)
		*(start + i) *= r;
}