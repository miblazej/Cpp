// prosty przyk³ad u¿ycia struktury
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
	inflatable guesy = {
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal = {
		"Audacious Atrhur",
		3.12,
		32.99
	};
	cout << "Wpisz na swoja liste gosci jeszcze " << guesy.name << " oraz " << pal.name << "!\n";
	cout << "Mozesz miec ich oboje za " << guesy.price + pal.price << "z³\n";
	return 0;
}