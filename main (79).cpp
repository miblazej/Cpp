#include <iostream>

using namespace std;

int main(void)
{
	unsigned long long sekundy;
	const int sekundy_w_minucie{ 60 };
	const int sekundy_w_godzinie{ 3600 };
	const unsigned int sekundy_w_dniu{ 86400 };
	const unsigned long sekundy_w_miesiacu{ 2592000 };
	const unsigned long sekundy_w_roku{ 31536000 };
	cout << "Podaj liczbe sekund" << endl;
	cin >> sekundy;
	unsigned long lata = sekundy / sekundy_w_roku;
	sekundy -= lata * sekundy_w_roku;
	unsigned long miesiace = sekundy / sekundy_w_miesiacu;
	sekundy -= miesiace * sekundy_w_miesiacu;
	unsigned long dni = sekundy / sekundy_w_dniu;
	sekundy -= dni * sekundy_w_dniu;
	unsigned long godziny = sekundy / sekundy_w_godzinie;
	sekundy -= godziny * sekundy_w_godzinie;
	unsigned long minuty = sekundy / sekundy_w_minucie;
	sekundy -= minuty * sekundy_w_minucie;
	cout << "Podana liczba sekund to: " << lata << " lat, " << miesiace << " miesiecy, " << dni << " dni," << godziny << " godziny, " << minuty << " minut, " << sekundy << " sekund" << endl;
}