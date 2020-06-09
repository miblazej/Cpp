// Napisz program wypisujacy wzorek przyklad wpisujesz 5 pierwszy ....* ostatni *****
#include<iostream>

int main()
{
	std::cout << "Podaj liczbe wierszy " << "\n";
	int a;
	std::cin >> a;
	int j = 1;
	for (int i = a-1; i >= 0; i--,j++)
	{
		int i1 = i;
		while (i1) {
			std::cout << ".";
			i1--;
		}
		int j1 = j;
		while (j1) {
			std::cout << "*";
			j1--;
		}
		std::cout << "\n";
	}
	return 0;
}