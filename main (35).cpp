#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	char ch;
	while (cin.get(ch) && ch != '@')
	{
		if (!isdigit(ch)) {
			if (isalpha(ch))
			{
				if (islower(ch))
				{
					ch = toupper(ch);
				}
				else
					ch = tolower(ch);
			}
			cout << ch;
		}
	}
}