#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
};

void orderNumbers(int& a, int& b, int& c)
{
	if (a > b)
	{
		swap(a, b);
	}

	if (b > c)
	{
		swap(b, c);
	}

	if (a > b)
	{
		swap(a, b);
	}
}

int main()
{
	int a = 1, b = 0, c = 4;

	orderNumbers(a, b, c);

	cout << a << " " << b << " " << c << endl;

	return 0;
}
