// uzycie operatora new
#include <iostream>
int main()
{
	using namespace std; 
	int night = 1001;
	int* pt = new int;
	*pt = 1001;

	cout << "Wartosc nights = ";
	cout << night << " :polozenie " << &night << endl;
	cout << "int " << "wartosc = " << *pt << ": polozenie = " << pt << endl;

	double* pd = new double; // alokacja pamieci pod wartosc double
	*pd = 100001.0;          // zapis pamieci w tej komorce
	cout << "double " << "wartosc = " << *pd << ": polozenie = " << pd << endl;
	cout << "polozenie wskaznika pd: " << &pd << endl;
	cout << "wielkosc pt = " << sizeof(pt);
	cout << "wielkosc *pt = " << sizeof(*pt) << endl;
	cout << "wielkosc pd = " << sizeof(pd) << "wielkosc *pd = " << sizeof(*pd);
	return 0;
}