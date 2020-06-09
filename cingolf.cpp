// pomijanie danych nie bedacych liczbami
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	int golf[Max];
	cout << "Prosze podac wyniki w golfie.\n";
	cout << "Musisz podac wyniki " << Max << " gier\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "tura " << i + 1 << ".:";
		while (!(cin >> golf[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Prosze podac liczbe: ";
		}
	}
	// wyliczanie sredniej
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	cout << total / Max << " = sredni wyniki z " << Max << " tur\n";
	return 0;
}