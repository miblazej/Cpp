// Jeszcze o petli for
#include<iostream>

const int ArSize = 16;


int main()
{
	long long factrorials[ArSize];
	factrorials[1] = factrorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factrorials[i] = i * factrorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "!= " << factrorials[i] << std::endl;
	return 0;
}