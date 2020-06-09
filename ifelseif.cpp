// uzcyie if else if else
#include<iostream>
const int Fave = 27;
int main()
{
	using namespace std;
	int n;

	cout << "Szukaj swojej ulubionej liczby - miescie sie ";
	cout << "w zakresie 1-100: ";
	do {
		cin >> n;
		if (n < Fave)
			cout << "Za malo -- proboj dalej: ";
		else if (n > Fave)
			cout << "Za duzo proboj dalej: ";
		else
			cout << Fave << " to jest to\n";
	} while (n != Fave);
	return 0;
}