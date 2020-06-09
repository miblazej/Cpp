// liczbowy warunek petli for
#include<iostream>

int main()
{
	using namespace std;
	cout << "Podaj wartosc poczatkowa odliczania" << endl;
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--) {
		cout << "i = " << i << "\n";
	}
	cout << "Gotowe, bo juz i = " << i << endl;
	return 0;
}