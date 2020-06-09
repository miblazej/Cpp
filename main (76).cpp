// Przeliczenie z litrów na 100 kilometrów na mile na galon
#include <iostream>

using namespace std;

int main(void)
{
	float litry_na_sto{};
	const float mile{ 62.15 };
	const float galon{ 3.785 };
	cout << "Podaj ile litrow na sto: ";
	cin >> litry_na_sto;
	float zluzycie_na_mile;
	zluzycie_na_mile = litry_na_sto / mile;
	float na_galonie{};
	na_galonie = galon / zluzycie_na_mile;
	cout << "Twoj samochod przejedzie: " << na_galonie << " mil na galonie paliwa" << endl;
	return 0;
}