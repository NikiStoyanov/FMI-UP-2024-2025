#include <iostream>

using namespace std;

int getLastKDigits(int number, int k)
{
	int reversed = 0;
	
	for (int i = 0; i < k; i++)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
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
	int a, b, k;
	cin >> a >> b >> k;

	b = concat(getLastKDigits(a, k), b);
	cout << b;
}