// Przepisz listing 4.4 zamiast tablic z znakow char uzyj string

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "Podaj swoje imie: \n";
	getline(cin, name);
	cout << "Podaj swoj ulubiony desser:\n";
	getline(cin, dessert);
	cout << "Mam dla ciebie " << dessert;
	cout << ", " << name << ".\n";
	return 0;
}