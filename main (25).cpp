// srednia harmoniczna w funkcji
#include<iostream>
using namespace std;

double harmonic(double a, double b);

int main()
{
	double a;
	double b;

	while (cin >> a >> b) {
		if (cin.fail())
			break;
		cout << "Harmonic mean is equal to " << harmonic(a, b) << endl;
	}
	return 0;
}

double harmonic(double a, double b)
{
	return (2 * a * b) / (a + b);
}