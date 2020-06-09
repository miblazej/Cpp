#include <iostream>

using namespace std;

double calculate(double a, double b, double(*pf)(double c, double d));
double add(double a, double b);
double sub(double a, double b);
double multi(double a, double b);

int main()
{
	double a = 10;
	double b = 12;

	double (*pf[3])(double, double);
	pf[0] = add;
	pf[1] = sub;
	pf[2] = multi;
	for (int i = 0; i < 3; i++)
	{
		cout << pf[i](a, b) << endl;
	}
	return 0;
}

double calculate(double a, double b, double(*pf)(double c, double d))
{
	return pf(a, b);
}

double add(double a, double b)
{
	return a + b;
}

double sub(double a, double b)
{
	return a - b;
}
double multi(double a, double b)
{
	return a * b;
}