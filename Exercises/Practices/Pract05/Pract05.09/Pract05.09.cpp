#include <iostream>

using namespace std;

bool checkForAdjacentEqualDigits(int number)
{
	if (number < 10)
	{
		return false;
	}

	int lastDigit = number % 10;
	number /= 10;

	while (number != 0)
	{
		if (number % 10 == lastDigit)
		{
			return true;
		}
		else
		{
			lastDigit = number % 10;
		}

		number /= 10;
	}

	return false;
}

int main()
{
	int k, l;
	cin >> k >> l;

	for (int i = k; i <= l; i++)
	{
		if (checkForAdjacentEqualDigits(i))
		{
			cout << i << " ";
		}
	}
}