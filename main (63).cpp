// tablica struktur
#include <iostream>
struct  inflatable
{
	char name[20];
	float volume;
	double price;
};

union pio
{
	long id_num;
	char id_char[20];
};
int main()
{
	using namespace std;
	inflatable guests[2] =
	{
		{"Bambi", 0.5,21.99},
		{"Godzilla", 2000, 565.99}
	};
	cout << "Goscie tacy jak " << guests[0].name << " i " << guests[1].name << "\nrazem maja " << guests[0].volume + guests[1].volume << " stop szesciennych\n";
	pio aha { 4 };
	cout << aha.id_num << endl;
	cout << aha.id_char << endl;
	return 0;
}