#include<iostream>
#include<fstream>
#include<cstdlib>

const int SIZE = 60;

int main()
{
	using namespace std;
	char filename[SIZE] = "text.txt";
	ifstream inFile;
	inFile.open(filename);
	if (inFile.is_open())
		cout << "Otwarto\n";
	if (inFile.fail())
		cout << "Error\n";
	char ch;
	int count = 0;
	
	inFile >> ch;
	while (inFile.good())
	{
		++count;
		inFile >> ch;
	}
		cout << "Koniec pliku\n";
		cout << "Wczytanych elementow " << count;
	
	inFile.close();
	return 0;
}