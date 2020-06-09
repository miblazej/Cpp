#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main()
{
	using namespace std;
	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32 ,64, 128 };

	cout << cookies << " = adress tablicy, " << sizeof cookies << " = sizeof cookies \n";
	int sum = sum_arr(cookies, ArSize);
	cout << "Zjedzono ciasteczek: " << sum << endl;
	sum = sum_arr(cookies, 3);
	cout << "Pierwsze trzy osoby zjadly " << sum << " ciastek\n";
	sum = sum_arr(cookies + 4, 4);
	cout << "Ostatnich czworo zjadlo " << sum << " ciastek.\n";
	return 0;
}

int sum_arr(int arr[], int n)
{
	using namespace std;

	int total = 0;
	cout << arr << " = arr, ";
	cout << sizeof arr << " = sizeof arr\n";
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}