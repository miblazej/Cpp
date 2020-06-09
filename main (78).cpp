// Program obliczaj¹cy udzia³ ludnoœci Polski
#include <iostream>

using namespace std;

int main(void)
{
	double populacja{};
	double populacja_polski{};
	cout << "Podaj populacje ziemska: "; 
	cin >> populacja;
	cout << "Podaj populacje polski: ";
	cin >> populacja_polski;
	double procent{};
	procent = populacja_polski / populacja * 100;
	cout.precision(3);
	cout << "Populacja polski stanowi " << procent << "% populacji ziemskiej" << endl;
	return 0;
}