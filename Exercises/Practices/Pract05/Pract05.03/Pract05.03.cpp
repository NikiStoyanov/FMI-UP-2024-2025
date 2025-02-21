#include <iostream>

using namespace std;

int concat(int a, int b)
{
	int reversed = 0;

	while (b != 0)
	{
		int lastDigit = b % 10;

		reversed = reversed * 10 + lastDigit;

		b /= 10;
	}

	while (a != 0)
	{
		int lastDigit = a % 10;

		reversed = reversed * 10 + lastDigit;

		a /= 10;
	}

	int result = 0;

	while (reversed != 0)
	{
		int lastDigit = reversed % 10;

		result = result * 10 + lastDigit;

		reversed /= 10;
	}

	return result;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << concat(a, b);
}