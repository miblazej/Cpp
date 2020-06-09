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

int main()
{
	using namespace std;
	fish* ps = new fish{ "karp", 100, 10.25 };
	cout << ps->type << endl;
	cout << ps << endl;
	cout << ps + 1 << endl;
	cout << &ps->dlugosc;
	delete[] ps;
	return 0;
}