// Napisz program ktoremu podasz miesieczna sprzedarz ksiazek w sztukach, program powinien uzyc petli do poproszenia o dane za miesiac korzystaja z tablicy * char
// zainicjalizowanej nazwami miesiecy i zapisanujacej wczytane dane do talibcy liczby typu int, nastepnie progarm ma wyliczyc sume zawartosci tablicy i podac
// roczna sprzedarz lacznie
#include<iostream>
#include<string>

int main() {
	using namespace std;
	const string  miesiace[12] = { "styczen","luty","marzec","kwiecien","maj","czerwiec","lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien" };
	int sprzedarz[12];
	for (int i = 0; i < 12; i++) {
		cout << "Podaj sprzedarz za " << miesiace[i] << "\n";
		cin >> sprzedarz[i];
	}
	int suma = 0;
	for (int x : sprzedarz) {
		suma += x;
	}
	cout << "Suma sprzedarzy wyniosla " << suma << endl;
	return 0;
}