// Cwiczenie polegajace na stworzeniu dwoch funckji kazda z nich ma generowac prosty lancuch znakowy
#include <iostream>
using namespace std;

void func1(void);
void func2(void);

int main(void)
{
	func1();
	func1();
	func2();
	func2();
	return 0;
}

void func1(void) {
	cout << "Entliczek petliczek" << endl;
}

void func2(void) {
	cout << "Czerwony stoliczek" << endl;
}