#include <iostream>

using namespace std;

int main()
{
	long long number;
	cin >> number;

	int sum = 0;

	CALCULATE:
	while (number != 0)
	{
		sum += number % 10;

		number /= 10;
	}

	if (sum > 9)
	{
		number = sum;
		sum = 0;
		goto CALCULATE;
	}
	
	cout << sum << endl;

	return 0;
}
