//definiowanie i uzycie referencji
#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodens = rats;
	
	cout << " rats = " << rats << endl;
	cout << "rodens = " << rodens << endl;
	rats++;
	cout << " rats++\n";
	cout << " rats = " << rats << endl;
	cout << "rodens = " << rodens << endl;
	cout << "adress rats = " << &rats << endl;
	cout << "adressrodens = " << &rodens << endl;

	return 0;
}