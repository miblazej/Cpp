// ma³e tablice liczb ca³kowitych
#include <iostream>

int main()
{
	using namespace std;

	int yams[3]{ 7, 8, 6 };
	int yamscost[3]{ 20, 30, 5 };

	cout << "Razem ignamów = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "Paczka zawierajaca " << yams[1] << " ignamow kosztuje po ";
	cout << yamscost[1] << " groszy za bulwe.\n";
	int total = yams[0] * yamscost[0] + yams[1] * yamscost[1];
	total += yams[2] * yamscost[2];
	cout << "Laczny koszto ignamu to " << total << " groszy.\n";

	cout << "\nRozmiar tablicy yams = " << sizeof yams;
	cout << " bajtow.\n";
	cout << "Rozmiar jednego elementu = " << sizeof yams[0];
	cout << " bajtow.\n";
	return 0;
}