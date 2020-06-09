// program proszacy o podanie 10 wynikow golfowych zapisanych w tablicy
// nalezy umozliwic zakonczenie wpisywanie danych przed podaniem wszytskich tych wynikow
// program ma pokazac wyniki w jednym wierszu i podac wynik sredni
// wprowadzenie danych, wyswietlanie oraz srednia maja byc obslugiwane w trzech roznych funckjach

#include<iostream>

using namespace std;

int podaj(int * a );
void show(int * a, int n);
void mean(int * a, int n);

#include<iostream>

int main()
{
	// wskaznik do struktury
	int * a = new int[10];
	cout << "Podaj wyniki \n";
	int n = podaj(a);
	cout << " Podane wyniki to ";
	show(a, n);
	cout << "Srednia wynikow to ";
	mean(a, n);
	delete[] a;
	return 0;
}

int podaj(int* a)
{
	int i = 0;
	int b;
	while (cin >> b)
	{
		if (cin.fail())
			break;
		*(a + i) = b;
		i++;
		if (i == 9)
			break;
	}
	return i;
}

void show(int* a, int n)
{
	cout << "Wyniki golfa\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " \n";
	}
}

void mean(int* a, int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total += a[i];
	cout << "Srednia to " << total / n;
}