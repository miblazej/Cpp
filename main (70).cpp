// Wczytywanie wiersza danych po liczbie
#include <iostream>

int main()
{
	using namespace std;
	cout << " W ktorym roku zbudowano twoj dom?\n";
	int year;
	cin >> year;
	cout << "Przy jakiej ulicy mieszkasz?\n";
	char adress[80];
	cin.getline(adress, 80);
	cout << "Rok budowy: " << year << endl;
	cout << "Adres: " << adress << endl;
	cout << "Gotowe!\n";
	return 0;
}