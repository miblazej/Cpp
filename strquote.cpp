// rozne techniki programowania
#include<iostream>
#include<string>
using namespace std;
string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);

int main()
{
	string input;
	string copy;
	string result;

	cout << "Podaj lancuch: ";
	getline(cin, input);
	copy = input;
	cout << "Wprowadzony lancuch: " << input << endl;
	result = version1(input, "***");
	cout << "Lancuch po wzbogaceniu: " << result << endl;
	cout << "Oryginalny lancuch: " << input << endl;

	result = version2(input, "###");
	cout << "Lancuch po wzbogaceniu: " << result << endl;
	cout << "Oryginalny lancuch: " << input << endl;

	cout << "Przywrocenie oryginalnego lancucha.\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Lancuch po wzgobaceniu: " << result << endl;
	cout << "Oryginalny lancuch " << input << endl;
}

string version1(const string& s1, const string& s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp;
}

const string& version2(string& s1, const string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}

const string& version3(string& s1, const string& s2)
{
	string temp;

	temp = s2 + s1 + s2;
	
	return temp;
}
