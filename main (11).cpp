#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "Ile masz marchewek? " << endl;
	cin >> carrots;
	cout << "Proszê o to jeszcze dwie" << endl;
	carrots = carrots + 2;
	cout << "Teraz masz " << carrots << " marchewek." << endl;
	return 0;
}