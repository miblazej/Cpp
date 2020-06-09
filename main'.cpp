// Program ma odczytywac slowo po slowie az do slowa gotowe nastepnie powinien zwrocic liczbe slow do slowa gotowe
#include <iostream>
#include<cstring>

int main(void)
{
	using namespace std;
	char* tab = new char[1000];
	int counter = 0;
	do {
		cin >> tab;
		counter++;
	} while (strcmp(tab, "gotowe") != 0);
	cout << "Podano " << counter << " slow\n";
	delete[] tab;
	return 0;
}