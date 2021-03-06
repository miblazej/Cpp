#include <iostream>

const int ArSize = 8;
int sum_arr(const int* begin, const int* end);
int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "Zjedzono ciasteczek " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "Pierwsze trzy osoby zjadly " << sum << " ciastek.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "Ostatnich czworo zjadlo " << sum << " ciastek.\n";
	return 0;
}

int sum_arr(const int* begin, const int* end)
{
	int total = 0;
	const int* pt; // nieintuicyjne przypisanie
	for (pt=begin; pt != end; pt++)
	{
		total += *pt;
	}
	return total;
}