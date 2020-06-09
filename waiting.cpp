// fukcnja clock() w petli opozniajacej
#include<iostream>
#include<ctime>
int main()
{
	using namespace std;
	cout << "Podaj czas opoznienia w sekundach: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "Zaczynamy\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "gotowe \a\n";
	cout << CLOCKS_PER_SEC;
	return 0;
}