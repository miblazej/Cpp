// definiowanie prostych funkcji
#include <iostream>

using namespace std;

void simple();

int main()
{
	cout << "main() wywola funkcje simple()" << endl;
	simple();
	cout << "main po zakonczeniu funkcji simple()\n";
	return 0;
}

void simple()
{
	cout << "Jestem sobie taka prosciutka funckja\n";
}
