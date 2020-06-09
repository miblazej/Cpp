// zliczanie wedlug wskazowek
#include<iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Podaj liczbe calkowita: ";
	int by;
	cin >> by;
	cout << "Zliczanie co " << by << endl;
	for (int i = 0; i < 100; i += by)
		cout << i << endl;
	return 0;
}