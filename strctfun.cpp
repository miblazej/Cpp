// funckja majace strukture jako parametr
#include <iostream>
#include <cmath>

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

// prototypy
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Podaj wartosci x i y ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Podaj nastepne liczby lub q, aby zakonczyc: ";
	}
	cout << "Gotowe.\n";
	return 0;
}

// zamienia wspolzedne prostokatne na biegunowe
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}
// pokazuje wspolzedne biegunowe radiany przelicza na stopnie.
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << " Odleglosc = " << dapos.distance;
	cout << ", kat = " << dapos.angle * Rad_to_deg << " stopni\n";
}