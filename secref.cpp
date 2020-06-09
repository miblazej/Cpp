#include <iostream>

int main()
{
	using namespace std;
	int rats = 101;
	int& rodens = rats;
	cout << "rats = " << rats;
	cout << ", rodens = " << rodens << endl;

	cout << "adres rats = " << &rats;
	cout << ", adres rodents = " << &rodens << endl;

	int bunnies = 50;
	rodens = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodens << endl;

	cout << "adres bunnies = " << &bunnies;
	cout << ", adres rodens = " << &rodens << endl;

	return 0;
}