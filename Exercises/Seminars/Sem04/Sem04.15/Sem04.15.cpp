#include <iostream>

using namespace std;

bool inspectNumber(int number)
{
	int lastDigit = number % 10;
	number /= 10;

	
	if (number % 10 < lastDigit)
	{
		while (number != 0)
		{
			if (number % 10 > lastDigit)
			{
				return false;
			}

			lastDigit = number % 10;
			number /= 10;
		}
	}
	else if (number % 10 > lastDigit)
	{
		while (number != 0)
		{
			if (number % 10 < lastDigit)
			{
				return false;
			}

			lastDigit = number % 10;
			number /= 10;
		}
	}
	else 
	{
		number /= 10;
	}

	return true;
}

int main()
{
	cout << inspectNumber(12236789) << endl;
	cout << inspectNumber(876522) << endl;
	cout << inspectNumber(234679) << endl;
	cout << inspectNumber(34561) << endl;

	return 0;
}
