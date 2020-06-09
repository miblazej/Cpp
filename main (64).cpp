// Przypisywanie struktur
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;

	inflatable bouquet = {
		"sloneczniki",
		0.20,
		12.49
	};
	inflatable choice;
	cout << "zmienna bouquet: " << bouquet.name << " za " << bouquet.price << " zl " << endl;
	choice = bouquet; // przypisanie struktury
	cout << "zmienna choice: " << choice.name << " za ";
	cout << choice.price << " z³" << endl;
	return 0;
}