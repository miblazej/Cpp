// wczytywanie znakow w petli while
#include<iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;

	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << " wczytano " << count << " znakow\n";
	return 0;
}