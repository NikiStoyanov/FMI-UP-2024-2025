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

int sortDigits(int number)
{
	int result = 0;

	for (int i = 9; i >= 0; i--)
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
	cout << sortDigits(4791257) << endl;
	cout << sortDigits(1000) << endl;
}
