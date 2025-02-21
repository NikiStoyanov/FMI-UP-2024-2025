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
	int number;
	cin >> number;

	for (int i = 3; i <= number - 3; i++)
	{
		if (isPrime(i) && isPrime(number - i) && (number - i) - i >= 0)
		{
			cout << number << " = " << i << " + " << number - i << endl;
		}
	}

	return 0;
}
