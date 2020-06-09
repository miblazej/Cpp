#include <iostream>

using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinto(student pa[], int n);

void display1(student st);

void display2(const student* ps);

void display3(const student pa[], int n);

int main()
{
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinto(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Gotowe\n";
	return 0;
}

int getinto(student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Podaj nazwisko ";
		cin >> pa[i].fullname;
		cin.get();
		cout << "Podaj hobby ";
		cin >> pa[i].hobby;
		cin.get();
		cout << "Podaj ooplevel ";
		cin >> pa[i].ooplevel;
		cin.get();
	}
	return n;
}

void display1(student st)
{
	cout << st.fullname << " " << st.hobby << " " << st.ooplevel << endl;
}


void display2(const student* ps)
{
	cout << ps->fullname << " " << ps->hobby << " " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {

	for(int i = 0; i < n ; i++)
		cout << pa[i].fullname << " " << pa[i].hobby << " " << pa[i].ooplevel << endl;
}