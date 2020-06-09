// Program ma odczytywac slowo po slowie az do slowa gotowe nastepnie powinien zwrocic liczbe slow do slowa gotowe
#include <iostream>
#include<cstring>
#include<string>

int main(void)
{
	using namespace std;
	string tab;
	int counter = 0;
	do {
		cin >> tab;
		counter++;
	} while (tab != "gotowe");
	cout << "Podano " << counter - 1 << " slow\n";
	return 0;
}