#include <iostream>

using namespace std;

bool inspectNumber(int number)
{
	int lastDigit = number % 10;
	number /= 10;

	while (number != 0)
	{
		if (number % 10 != lastDigit)
		{
			return false;
		}

		number /= 10;
	}

	return true;
}

int main()
{
	cout << inspectNumber(12236789) << endl;
	cout << inspectNumber(876522) << endl;
	cout << inspectNumber(234679) << endl;
	cout << inspectNumber(111111) << endl;

	return 0;
}
