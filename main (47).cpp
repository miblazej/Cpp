// Z miejsca deklarowa�em dynamicznie struktury dlatego nie musze wykonywa� tamtych �wicze� bo ju� je zrobi�em
// Uzyj bibloteki array do obliczenia sredniej trzech czas�w na 100 m
#include<iostream>
#include<array>

using namespace std;

int main()
{
	array<double, 3> sprint;
	cout << " Podaj pierwszy wynik ";
	cin >> sprint[0];
	cout << " Podaj drugi wynik ";
	cin >> sprint[1];
	cout << " Podaj trzeci wynik ";
	cin >> sprint[2];
	cout << "Srednia to " << (sprint[0] + sprint[1] + sprint[2]) / 3 << endl;
	return 0;
}