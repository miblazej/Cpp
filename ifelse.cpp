// uzycie instrukcji if else
#include<iostream>

int main()
{
	char ch;

	std::cout << "Pisz, a ja bede powtarzac\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}
	std::cout << "\n Prosze wybaczyc drobne niedorobki. \n";
	return 0;
}