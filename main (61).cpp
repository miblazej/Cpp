// nasza pierwsza zmienna wskaznikowa
#include<iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int* p_updates;
	p_updates = &updates;

	cout << "Wartosci: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Adresy: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1; // *wskaznik z adresesem = *wskaznik_z_adresem + 1;
	cout << "Teraz updates = " << updates << endl;
	return 0;
}