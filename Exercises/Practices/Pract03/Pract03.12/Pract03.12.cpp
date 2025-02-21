#include <iostream>

using namespace std;

int main()
{
	int n, number;
	cin >> n >> number;

	int sum = 0;

	while (number != -1)
	{
		int gcd = n > number ? number : n;

		while (n % gcd != 0 || number % gcd != 0)
		{
			gcd--;
		}

		if (gcd == 1)
		{
			sum += number;
		}

		cin >> number;
	}

	cout << sum << endl;

	return 0;
}