#include<iostream>
#include<cmath>

int main()
{
	using namespace std;
	int a;
	double pod;
	while (cin >> a) {

		if (cin.fail() || a < 0)
			break;
		pod = 0;
		if (a > 35000) {
			pod = 4000 + (a - 35000) * 0.2;
		}
		else if (a <= 35000 && a > 15000) {
			pod = 1000 + (a - 15000) * 0.15;
		}
		else if (a <= 15000 && a > 5000) {
			pod = (a - 5000) * 0.1;
		}
		else
			pod = 0;
		
		cout << "Podatek nalezny to " << pod << endl;
	}
}