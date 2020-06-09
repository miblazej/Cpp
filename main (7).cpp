// Konwersja mill morskich na metry 1852
#include <iostream>

int main(void)
{
	using namespace std;
	int mile;
	cout << "Podaj odleglosc w milach " << endl;
	cin >> mile;
	mile *= 1852;
	cout << "Podana odleglosc w metrach to " << mile;
	return 0;
}