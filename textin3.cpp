// wczytywanie znakow w petli while
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Podawaj znaki: # konczy wprowadzanie:\n";
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << " wczytano " << count << " znakow\n";
	return 0;
}