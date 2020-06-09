#include <iostream>

int silnia( int n);

int main()
{
	using namespace std;
	int n;
	cout << "Podaj liczbe do obliczenia silni" << "\n";
	while (cin >> n) 
	{
		if (cin.fail()) {
			break;
		}
		cout << silnia(n) << "\n";
		cout << "Podaj liczbe do obliczenia silni" << "\n";
	}
	return 0;
}

int silnia(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else {
		return n * silnia(n - 1);
	}
}