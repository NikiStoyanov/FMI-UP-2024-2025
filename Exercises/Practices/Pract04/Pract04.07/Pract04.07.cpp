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
	cout << isPrime(7) << endl;
	cout << isPrime(6) << endl;
}