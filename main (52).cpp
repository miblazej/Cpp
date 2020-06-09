// Program który ³¹czy trzy tablice typu char dwie pobrane od uzytkownika oraz jedna zadeklarowana przez programiste a nastepnie ja wyœwietla
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

int main()
{
	using namespace std;
	char imie[80];
	char nazwisko[40];
	cout << "Podaj imie:";
	cin.getline(imie, 40);
	cout << "Podaj nazwisko:";
	cin.getline(nazwisko, 40);
	strcat(imie, ", ");
	strcat(imie, nazwisko);
	cout << "Oto informacje zestawione w jeden napis: " << imie << endl;
	return 0;
}