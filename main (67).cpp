// Klasy string ciag dalszy
#include <iostream>
#include <string>
#include <cstring>
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "pantera";

	str1 = str2;
	strcpy_s(charr1, charr2);
	str1 += "makaron";
	strcat_s(charr1, "sok");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "Lancuch " << str1 << " ma " << len1 << " znakow.\n";
	cout << "Lancuch " << charr1 << " ma " << len2 << " znakow .\n";

	return 0;
}