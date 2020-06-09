#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Podaj slowo: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		// Blok kodu
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nGotowe" << endl;
	return 0;
}