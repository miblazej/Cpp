// uzycie biblioteki ctype
#include<iostream>
#include<cctype>
int main()
{
	using namespace std;
	cout << "Podaj tekst do analizy, zakoncz go."
		"wpisujace znak @.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while (ch != '@') {
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout << chars << " liters "
		<< whitespace << " bialych znakow "
		<< digits << " cyfr "
		<< punct << " znakow przystankowych "
		<< others << " innych znakow \n";
	return 0;
}