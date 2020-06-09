//Napisz program ktoremu podasz miesieczna sprzedarz ksiazek w sztukach, program powinien uzyc petli do poproszenia o dane za miesiac korzystaja z tablicy* char
// zainicjalizowanej nazwami miesiecy i zapisanujacej wczytane dane do talibcy liczby typu int, nastepnie progarm ma wyliczyc sume zawartosci tablicy i podac
// roczna sprzedarz lacznie
#include<iostream>
#include<string>

int main() {
	using namespace std;
	const string  miesiace[12] = { "styczen","luty","marzec","kwiecien","maj","czerwiec","lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien" };
	int sprzedarz[3][12];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 12; j++)
		{
			cout << "Podaj sprzedarz za " << miesiace[j] << "\n";
			cin >> sprzedarz[i][j];
		}
		
	}
	int suma[3] = { 0,0,0 };
	int suma_c = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int x : sprzedarz[i]) {
			suma[i] += x;
		}
		cout << "Suma sprzedarzy wyniosla " << suma[i] << endl;
		suma_c += suma[i];
	}
	cout << "Suma calkowita wyniosla " << suma_c << endl;
	return 0;
}