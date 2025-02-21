#include <iostream>

using namespace std;

int getNumberLength(int number)
{
	int count = 0;

	while (number != 0)
	{
		count++;
		number /= 10;
	}

	return count;
}

int main()
{
	int number;
	cin >> number;

	int result = 0;

	int numberLength = getNumberLength(number);

	while (number != 0)
	{
		if (numberLength % 2 == 0)
		{
			result = result * 10 + number % 10;
		}

		number /= 10;
		numberLength--;
	}

	while (result != 0)
	{
		cout << result % 10 << ' ';

		result /= 10;
	}

	return 0;
}
