// uzycie petli for z klasa string
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Podaj slowo ";
	string slowo;
	cin >> slowo;

	// wyswietlenie slowa od konca
	for (int i = slowo.size() - 1; i >= 0; i--)
		cout << slowo[i];
	cout << "\nDo widzenia" << endl;
	return 0;
}