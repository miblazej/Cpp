#include<iostream>

using namespace std;

int fill_array(double* tab, int n);
void show_array(double* tab, int n);
void reverse_array(double* tab, int n);

int main()
{
	cout << " Podaj rozmiar tablicy :\n";
	int n;
	cin >> n;
	double* tab = new double[n];
	n = fill_array(tab, n);
	show_array(tab, n);
	reverse_array(tab, n);
	show_array(tab, n);
	return 0;
}

int fill_array(double* tab, int n) {
	cout << "Podaj liczby\n";
	double a;
	int i = 0;
	while (cin >> a)
	{
		if (cin.fail())
			break;
		tab[i] = a;
		i++;
		if (i == (n))
			break;
	}
	return i;
}

void show_array(double* tab, int n)
{
	for (int i = 0; i < n; i++)
		cout << " " << tab[i];
	cout << "\n";
}

void reverse_array(double* tab, int n)
{
	double* tab1 = new double[n];
	//kopia calego lancuha
	for (int i = 0; i < n; i++)
		tab1[i] = tab[i];
	int j = n - 1;
	for (int i = 0; i < n; i++, j--)
	{
		tab[i] = tab1[j];
	}
}