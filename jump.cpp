// uzycie continue oraz break
#include <iostream>
const int ArSize = 80;
int main()
{
	using namespace std;
	char line[ArSize];
	int space = 0;

	cout << "Wpisz wiersz tekstu:\n";
	cin.get(line, ArSize);
	cout << "Ca³y wiersz:\n" << line << endl;
	cout << "Wiersz do pierwszej kropki:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		space++;
	}
	cout << "\n" << space << " spacji\n";
	cout << "Gotowe,\n";
	return 0;
}