// rownosc i przypisanie
#include<iostream>
int main()
{
	using namespace std;
	int quizscores[10] = { 20, 20, 20, 20, 20, 19, 20, 18, 20 , 20 };

	cout << "Bezblêdnie:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++)
		cout << "text " << i << "ma wartosc 20\n";
	cout << "Robi sie niebezpiecznie" << endl;
	for (i = 0; quizscores[i] = 20; i++)
		cout << "text " << i << " ma wartoœæ 20\n";
	return 0;
}