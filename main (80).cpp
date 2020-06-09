// Program konwertuj¹ce d³ugoœci geograficzne
#include <iostream>
using namespace std;

int main(void)
{
	double minuta{0.01666666};
	double sekunda{0.00027777};
	int stopnie{};
	int minuty{};
	int sekundy{};
	cout << "Podaj dlugosc w stopniach: " << endl;
	cin >> stopnie;
	cout << "Teraz podaj ilosc minut: " << endl;
	cin >> minuty;
	cout << "Teraz podaj ilosc sekund: " << endl;
	cin >> sekundy;
	cout << stopnie << " stopni," << minuty << " minut, " << sekundy << " sekund = " << double(stopnie + (minuty * minuta) + (sekundy * sekunda));
	return 0;
}