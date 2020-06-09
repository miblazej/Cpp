// dodawanie wskaznikow
#include <iostream>
int main()
{
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };
	double* pw = wages;
	short* ps = &stacks[0];
	cout << "pw = " << pw << " a *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "pw = " << pw << " a *pw = " << *pw << "\n\n";

	cout << "ps = " << ps << "a *ps = " << *ps << endl;
	ps++;
	cout << "Dodaj do wskaznika ps 1:\n";
	cout << "ps = " << ps << "a *ps = " << *ps << endl;

	cout << "dostep do dwoch elementow, zapis tablicowy \n";
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] " << stacks[1] << endl;
	cout << "dostep do dwoch elementow, zapis wskaznikowy\n";
	cout << "*stacks = " << *stacks << ", *(stacks + 1) =  " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = wielkosc tablicy wages \n";
	cout << sizeof(pw) << " = wielkosc tablicy wskaznika pw\n";

	return 0;
}