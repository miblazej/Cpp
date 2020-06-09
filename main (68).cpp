// Przypisanie, dodawanie i do³¹czanie
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string s1 = "pingwin";
	string s2, s3;

	cout << "Jeden obiekt mozna przypisac innemu: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << " s2: " << s2 << endl;
	cout << "Obiektowi string mozna przypisac lancuch w konwencji C.\n";
	cout << "s2 = \"myszolow\"\n";
	cout << "s2: " << s2 << endl;
	cout << "Mozna laczyc dwa lancuchy string: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	cout << "Mozna dodawac lancuchy.\n";
	s1 += s2;
	cout << "s1 += s2 daje s1 = " << s1 << endl;
	s2 += " na dzien";
	cout << "s1 += \" na dzien\" daje s2 = " << s2 << endl;
	return 0;
}