#define _CRT_SECURE_NO_WARNINGS
// wskazniki i lancuchy znakowe
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char animal[20] = "niewdzwiedz";
	const char* bird = "myszolow";
	char* ps;

	cout << animal << " oraz " << bird << "\n" << " niezainicjonowane" << "\n";
	cout << "Podaj rodzaj zwierzecia: ";
	cin >> animal;

	ps = animal; // widaæ ¿e nazwa tablicy moze zostac przypisane do wskaznika co jest zrozumiale
	cout << ps << "i!\n";
	cout << "Przed uzyciem strcpy():\n" << animal << " pod adresem " << (int*)animal << endl;
	cout << ps << " pod adresem " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1]; // deklaracja nowej tablicy o dlugosci + 1 zarezerwowanej dla znaku zerowego
	strcpy(ps, animal);
	cout << "Po uzyciu strcpy():\n";
	cout << animal << " pod adresem " << (int*)animal << endl;
	cout << ps << " pod adresem " << (int*)ps << endl;
	delete[] ps;
	return 0;
}