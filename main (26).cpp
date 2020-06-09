// 1. Proptotyp, deklaracja,testowanie
// void igor();
// float tofu(int a)
// double mpg(double a, double b)
// double summation(long * tab, int n)
// double doctor(const char * tab)
// void oczywiscie(szef a)
//char * plot(struct * map)
// 6 nie wiem, const uzywa sie dla wskaznikow w celu chronienia funkcji przed zmiana
// 7 a[] *a albo a[] array vector
// przez wartosc przekazuejmy (a) a przez adres(&a) gdy przekazujemy przez adress mozemy bezposrednio zmieniac wartosci struktury w funckji
#include<iostream>

void wszystko_na(int* a, int n, int b);
void zakresy(int* a, int* b, int c);
double maxz(const double* a, int n);
int replace(char* str, char c1, char c2);
//int judge(int (*pf)(const char * c))
struct applicant {
	char name[30];
	int credit_ratings[3];
};

void show(applicant a)
{
	using namespace std;
	cout << a.name << endl;
	for (int i = 0; i < 3; i++)
		cout << a.credit_ratings[i];
}

void show(applicant* a)
{
	using namespace std;
	cout << a->name << endl;
	for (int i = 0; i < 3; i++)
		cout << a->credit_ratings[i];
}

//Zadanie 13
void f1(applicant a)
{
	std::cout << a.name << std::endl;
}

const char* f2(const applicant* a1, const applicant* a2)
{
	const char* a = "Kaka";
	return a;
}

int main()
{
	using namespace std;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	wszystko_na(a, 10, 5);
	for (int i = 0; i < 10; i++)
		cout << *(a + 1);
	zakresy(a,(a+9), 4);
	for (int i = 0; i < 10; i++)
		cout << *(a + 1);
	double d[10] = { 0.1,1,2,3,4,5,6,7,8,9 };
	cout << "\n" << maxz(d, 10);
	int total;
	char name[15] = "Kakarotto";
	total = replace(name, 't', 'r');
	cout << '\n' << total << '\n';
	(*p1)(applicant * a);
	p1 = f1;
	const char* (*p2)(const applicant * a1, const applicant * a2);
	p2 = f2;
	(*p1)(applicant * a) pa = new (*p1)(applicant * a)[5];

	return 0;
}

void wszystko_na(int* a, int n, int b)
{
	for (int i = 0; i < n; i++)
		*(a + i) = b;
}

void zakresy(int* a, int* b, int c)
{
	while (a != (b + 1))
	{
		*a = c;
		a++;
	}
}

double maxz(const double* a, int n)
{
	double max = a[0];
	for (int i = 0; i < n; i++)
	{
		max = max < a[i] ? a[i] : max;
	}
	return max;
}
int replace(char* str, char c1, char c2)
{
	int total = 0;
	for (int i = 0; str[i] != '\0';i++)
	{
		if (str[i] == c1)
		{
			str[i] = c2;
			total++;
		}
	}
	return total;
}