#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	int factorialSum = 0;

	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			factorialSum += j;
		}
	}

	cout << factorialSum << endl;

	return 0;
}
