#include <iostream>

inline double square(double x) { return x * x; }

int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << ", b =" << b << "\n";
	cout << "c = " << c << endl;
	cout << "c, kwadrat = " << square(c++) << "\n";
	cout << "Teraz c = " << c << "\n";
	return 0;
}