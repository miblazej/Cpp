#include <iostream>

void display(int h, int m);

int main(void) {
	using namespace std;
	int h;
	int m;
	cout << "Podaj liczbe godzin:" << endl;
	cin >> h;
	cout << "Podaj liczbe minut:" << endl;
	cin >> m;
	display(h, m);
	return 0;
}

void display(int h, int m)
{
	std::cout << "Czas: " << h << ":" << m << std::endl;
}