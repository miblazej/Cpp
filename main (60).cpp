// inicjalizacja wskaznika
#include <iostream>
int main()
{
	using namespace std;
	int higgens = 5;
	int* pt = &higgens;

	cout << "Wartosc zmiennej higgens = " << higgens << " Adress zmiennej higgens " << &higgens << endl;
	cout << "Wartosc *pt = " << *pt << " Wartosc pt " << pt << endl;
	return 0;
}