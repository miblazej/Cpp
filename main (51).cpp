// Program kt�ry ��czy trzy zmienne string dwie pobrane od uzytkownika oraz jedna zadeklarowana przez programiste a nastepnie ja wy�wietla
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>
#include<string>

int main()
{
	using namespace std;
	string imie;
	string nazwisko;
	cout << "Podaj imie:";
	getline(cin, imie);
	cout << "Podaj nazwisko:";
	getline(cin,nazwisko);
	imie = imie + ", " + nazwisko;
	cout << "Oto informacje zestawione w jeden napis: " << imie << endl;
	return 0;
}