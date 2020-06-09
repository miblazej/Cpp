#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Dlugosc lancucha w zmiennej charr przed wprowadzeniem danych: " << strlen(charr) << endl;
	cout << "Dlugosc lancucha w zmiennej charr przed wprowadzeniem dannych: " << str.size() << endl;
	cout << "wprowadzenie wiersza tekstu:\n";
	cin.getline(charr, 20);
	cout << "Wprowadzono: " << charr << endl;
	cout << "Podaj kolejny wiersz tekstu:\n";
	getline(cin, str);
	cout << "Wprowadzono: " << str << endl;
	cout << "Dlugosc lancucha w zmiennej char po wprowadzeniu danych: " << strlen(charr) << endl;
	cout << "Dlugosc lancucha w zmiennej str po wprowadzeniu danych: " << str.size() << endl;

	return 0;
}