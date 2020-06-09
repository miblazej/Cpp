#include<iostream>
unsigned int c_in_str(const char* str, char ch);
int main()
{
	using namespace std;
	char mmm[15] = "minimum";
	char wail[15] = "ululuate";

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');

	cout << ms << "  znakow w m " << mmm << endl;
	cout << us << "  znawkow u w " << wail << endl;
	return 0;
}

unsigned int c_in_str(const char* str, char ch)
{
	unsigned int t = 0;

	while (*str)
	{
		if (*str == ch)
		{
			t++;
		}
		str++;
	}
	return t;
}