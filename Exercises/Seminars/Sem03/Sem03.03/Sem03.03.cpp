#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	int mostCommonDigit = 0, mostCommonDigitCount = 0,
		currentDigit = 0, currentDigitCount = 0;

	while (number != 0)
	{
		int lastDigit = number % 10;

		if (lastDigit == currentDigit)
		{
			currentDigitCount++;
		}
		else
		{

			if (currentDigitCount > mostCommonDigitCount)
			{
				mostCommonDigit = currentDigit;
				mostCommonDigitCount = currentDigitCount;
			}
			else if (currentDigitCount == mostCommonDigitCount
				&& currentDigit < mostCommonDigit)
			{
				mostCommonDigit = currentDigit;
				mostCommonDigitCount = currentDigitCount;
			}

			currentDigit = lastDigit;
			currentDigitCount = 1;
		}

		number /= 10;
	}

	cout << mostCommonDigit << endl;

	return 0;
}
