//uzycie operatora logicznej konikugcji
#include <iostream>

const char* qualify[4] = {
	"biega na 10km.\n",
	"przeciaganie liny w blocie\n",
	"pojedynek mistrzow canoe\n",
	"festiwal rzucania plecakiem\n"
};
int main()
{
	using namespace std;
	int age;
	cout << "Podaj swoj wiek: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "Kwalifikujesz sie do konkurencji " << qualify[index];
	return 0;
}