#include <iostream>
void countdown(int n);

int main()
{
	countdown(1000);
	return 0;
}

void countdown(int n) {
	using namespace std;
	cout << "Odliczanie ... " << n << endl;
	if (n > 0)
		countdown(n - 1);
	cout << n << ". Ba-bacj\n";
}