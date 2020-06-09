// Daphne ma 10% na kapitale poczatkowym a Cleo 5% na aktualnym kiedy Cleo bedzie mia³a wiêcej od Daphne

#include<iostream>

int main()
{
	using namespace std;
	double daphne = 100;
	double cleo = 100;
	int licznik = 1;
	do {
		daphne += 100 * 0.1;
		cleo += cleo * 0.05;
		cout << licznik << "   " << daphne << "   " << cleo << endl;
		licznik++;
	} while (daphne > cleo);
	return 0;
}

