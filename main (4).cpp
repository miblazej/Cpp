// Konwersja celciusza do Fahrenheita
#include <iostream>

int main(void)
{
	using namespace std;
	cout << "Podaj tempereature w Celciuszach" << endl;
	int c;
	cin >> c;
	cout << "Celciusz = " << c << " Fahrenheit = " << (c * 1.8) + 32 << endl;
	return 0;
}