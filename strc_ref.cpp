// uzycie referencji do struktur
#include<iostream>
#include<string>

struct free_throws 
{
	std::string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);
free_throws& accumulate(free_throws& target, const free_throws& source);
int main()
{
	free_throws one = { "Ifelsa Branch",13,14 };
	free_throws two = { "Andor Knott",10, 16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whilly Looper",5 ,9 };
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = { "Throwgoods", 0, 0 };

	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);

	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);

	dup = accumulate(team, five);
	std::cout << "Statystyka dla team:\n";
	display(team);
	std::cout << "Statystyka dla dup po przypisaniu:\n";
	display(dup);

	accumulate(dup, five) = four;
	std::cout << "Statysyka dla dup po omylkowym przypisaniu:\n";
	display(dup);
	

	return 0;
}

void display(const free_throws& ft)
{
	using std::cout;
	cout << "Imie: " << ft.name << "\n";
	cout << "Trafionych: " << ft.made << "\n";
	cout << "Rzutow: " << ft.attempts << "\n";
	cout << "Skutecznosc: " << ft.percent << "\n";
}

void set_pc(free_throws& ft)
{
	ft.percent = ft.attempts ? 100.0f * float(ft.made) / float(ft.attempts) : 0;
}

free_throws& accumulate(free_throws& target, const free_throws& source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}