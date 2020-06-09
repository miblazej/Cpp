// Program obliczajacy zuzycie benzyny, niejasny opis w ksiazce
#include <iostream>
using namespace std;
int main(void)
{


	const float zluzycie{ 0.125 };
	float stan_baku{};
	float kilometry{};
	cout << "Podaj stan baku przed startem: ";
	cin >> stan_baku;
	cout << "Podaj ile kilometrow przejechano: ";
	cin >> kilometry;
	stan_baku -= zluzycie * kilometry;
	cout << "W baku pozostalo paliwa " << stan_baku << " powinno wystarczyc na " << stan_baku / zluzycie << " kilometrow" << endl;
	return 0;
	
}