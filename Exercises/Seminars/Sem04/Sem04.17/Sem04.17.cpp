#include <iostream>

using namespace std;

int getDigitOccurrencesInNumber(int number, int digit)
{
	int count = 0;

	while (number != 0)
	{
		if (number % 10 == digit) 
		{
			count++;
		}

		number /= 10;
	}

	return count;
}

int sortDigitsInNumber(int number)
{
	int result = 0;

	for (int i = 1; i <= 9; i++)
	{
		int count = getDigitOccurrencesInNumber(number, i);

		for (int j = 0; j < count; j++)
		{
			result = result * 10 + i;
		}
	}

	return result;
}

int main()
{
	cout << sortDigitsInNumber(531261);
	return 0;
}
