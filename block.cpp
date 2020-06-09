// uzycie instrukcji zlozonej(blok)
#include <iostream>
int main()
{
	using namespace std;
	cout << "Cudowny kalkulator bedzie liczyc oraz sumowal srednia 5 liczb\n";
	cout << "Proszê podac piec wartosc: \n";
	double number;
	double sum = 0.0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Wartosc " << i << " : ";
		cin >> number;
		sum += number;
	}
	cout << "Doprawdy piec wspanialych liczb";
	cout << "Ich suma to " << sum << "," << endl;
	cout << "a srednia to " << sum / 5 << ".\n";
	cout << "Cudowny kalkulator zegna sie z toba" << endl;
	return 0;
}