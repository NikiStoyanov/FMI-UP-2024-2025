#include <iostream>

using namespace std;

long long divisorsSum(long long number)
{
	long long sum = 1;

	long long sqrtN = sqrt(number);

	for (long long i = 2; i <= sqrtN; i++)
	{
		if (number % i == 0)
		{
			sum += i;

			if (i != number / i)
			{
				sum += number / i;
			}	
		}
	}

	return sum;
}

int main()
{
	long long number;
	cin >> number;

	cout << (number == divisorsSum(number)) << endl;
	return 0;
}
