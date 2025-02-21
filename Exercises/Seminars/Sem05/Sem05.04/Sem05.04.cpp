#include <iostream>

using namespace std;

void validate(int& age, int& fn)
{
	if (age < 15 || age > 100)
	{
		age = 15;
	}

	if (fn < 10000 || age > 99999)
	{
		fn = 10000;
	}
};

int main()
{
	int age = 18, fn = 900;

	validate(age, fn);

	cout << age << " " << fn << endl;

	return 0;
}
