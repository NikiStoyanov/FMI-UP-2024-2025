#include <iostream>

using namespace std;

bool isPrime(int number)
{
	if (number == 1)
	{
		return false;
	}

	int sqrtN = sqrt(number);
	for (int i = 2; i <= sqrtN; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	long long sum = 0;

	for (int i = 100; i <= 999; i++)
	{
		int copy = i;

		int currentNumberDigitsSum = 0;

		while (copy != 0)
		{
			currentNumberDigitsSum += copy % 10;
			copy /= 10;
		}

		if (currentNumberDigitsSum >= 10 && isPrime(currentNumberDigitsSum))
		{
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}
