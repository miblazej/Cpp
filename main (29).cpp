#include<iostream>
#include<string>

int main()
{
	using namespace std;
	int sa = 0;
	int sp = 0;
	char ch;
	int i = 0;
	cin.get(ch);
	char prev = ' ';

	while (ch != 'q')
	{
		if (prev == ' ' && isalpha(ch)) {
			switch (ch)
			{
			case 'e':
				sa++;
				break;
			case 'y':
				break;
			case 'u':
				sa++;
				break;
			case 'i':
				sa++;
				break;
			case 'o':
				sa++;
				break;
			case 'a':
				sa++;
				break;
			default:
				sp++;
				break;
			}
		}
		
		prev = ch;
		cin.get(ch);
	}
	cout << sa << " slow zaczyna sie od samoglosek" << endl;
	cout << sp << " slowa zaczyna sie od spolglosek" << endl;
	
	return 0;
}