// funckja dwuargumentowa
#include <iostream>
using namespace std;
void n_chars(char, int);
int main()
{
	int times;
	char ch;

	cout << "Podaj znaki: ";
	cin >> ch;
	while (ch != 'q')
	{
		cout << "Podaj liczbe calkowita: ";
		cin >> times;
		n_chars(ch, times);
		cout << "\nPodaj nastepy znak: litera q konczy: ";
		cin >> ch;
	}
	cout << "Wartosc zmiennej times to " << times << ".\n";
	cout << "Do widzenia\n";
	return 0;
}

void n_chars(char c, int n) {
	while (n-- > 0)
		cout << c;
}