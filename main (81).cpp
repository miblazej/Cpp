#include <iostream>

using namespace std;

int main(void)
{
	float wzrost_stopy;
	int waga_funty;
	const int stop_funty{ 12 };
	const double cale_metry{ 0.0254 };
	const double funty_kilogramy{ 2.2 };
	cout << "Podaj wzrost w stopach: " << endl;
	cin >> wzrost_stopy;
	cout << "Podaj wage w funtach: " << endl;
	cin >> waga_funty;
	double wzrost_metry { wzrost_stopy * stop_funty * cale_metry };
	double waga_kg{ waga_funty / funty_kilogramy };
	cout << "Twoj wskaznik BMI to: " << double(waga_kg / (wzrost_metry * wzrost_metry)) << endl;
	return 0;

}