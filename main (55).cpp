// Pytania sprawdzajace rozdzia³ 4 
#include<iostream>
#include<array>
#include<string>
#include<vector>

// Zadanie 8
struct fish {
	char type[50];
	int weight;
	double dlugosc;
};




using namespace std;

int main(void) 
{
	// Zadanie 1
	char aktorzy[30]; // Tablica char zawieracjaca 30 znaków
	short betsie[100];  // Tablica short zawierajaca 100 znaków
	float chuck[13];    // Tablica float zawieracjaca 13 znaków
	long double dipsea[64]; // Tablica long float zawierajaca 64 liczby typu long double
	//Zadanie 2
	array<char, 30> aktorzy1; // tablica char zwierajaca 30 znaków deklaracja przy pomocy zmiennej array
	array<short, 100> betsie1; // tablica short zawierajaca 100 liczb typ short deklaracja j.w.
	array<float, 13> chuck1;
	array<long double, 64> dipsea1;
	//Zadanie 3
	int liczby[5] = { 1, 3, 5, 7 , 9 };
	// Zadanie 4
	int even = *liczby + *(liczby + 4);
	cout << even << endl;
	// Zadanie 5
	float ideas[2] = { 1.1, 23.2 };
	cout << *(ideas + 1);
	// Zadanie 6
	char food[] = { "cheeseburger" };
	//Zadanie 7
	string litera = { "Waldorf Salad" };
	// Zadanie 9
	fish karp = { "karp",1000,125.5 };
	//Zadanie 10
	enum Odpowiedz { tak = 1, nie = 2, chyba = 3 };
	// Zadanie 11
	cout << "\nZadanie 11" << endl;
	double ted = 20.2;
	double* pt = &ted;
	cout << *pt << endl;
	cout << pt << endl;
	// Zadanie 12
	float tracle[10];
	float* ptr = tracle;
	tracle[0] = 1.1;
	cout << "Zadanie 12 " << *ptr << endl;
	// Zadanie 13
	cout << " Podaj liczbe o typie int " << endl;
	int a;
	cin >> a;
	int* tab;
	tab = new int[a];
	delete[] tab;
	vector<int> taba(a);
	// Zadanie 14
	// Moim zdaniem pokaze adress to miejsca w pamieci w ktorej jest zapisany wskaznik do obszaru pamieci ale chyba wyswietli error poniewaz powinien to byc wskaznik
	// typu char.
	cout << (int*)"Dom wesolych bajtow" << endl;
	// wskazalo miejsce w pamieci gdzie zapisane sa wartosci pobrane z kodu.
	// Zadanie 16
	// Numer budynku zostanie pominiêty
	// Zadanie 17
	const int len = 10;
	vector<string> tabas(len);
	array<string, len> tabaa;
	return 0;
}