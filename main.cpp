#include <iostream>

using namespace std;

int main(void)
{
	const float cal { 2.52 };
	const float stopa{ 30.48 };
	cout << "Prosze podac odleglosc w centymetrach" << endl;
	int centymetry;
	cin >> centymetry;
	cout << "Podana odleglosc w calach to " << float(centymetry / cal) << endl;
	cout << "Podana odleglosc w stopach to " << float (centymetry / stopa) << endl;
	return 0;
} 