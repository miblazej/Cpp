// ourfunc.cpp - definiujemy w�asn� funkcj�
#include <iostream>
void simon(int); // prototyp w�asnej funckji

int main()
{
	using namespace std;
	simon(3);
	cout << "Podaj liczbe calkowita: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Gotowe!" << endl;
	return 0;
}

void simon(int n) {
	using namespace std;
	cout << "Simon prosi, abys dotknal palcow u stop " << n << " razy" << endl;
}