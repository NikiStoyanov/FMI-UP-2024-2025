#include <iostream>

using namespace std;

int myGcd(int a, int b)
{
	int gcd = a > b ? b : a;

	while (a % gcd != 0 || b % gcd != 0)
	{
		gcd--;
	}

	return gcd;
}

int myLcm(const int a, const int b)
{
	if (a == 0 || b == 0)
	{
		return 0;
	}

	return abs(a * b) / myGcd(a, b);
}

int main()
{
	int n;
	cin >> n;

	int gcd = 0, lcm = 0;
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		if (gcd == 0 && lcm == 0)
		{
			gcd = number;
			lcm = number;
		}
		else 
		{
			gcd = myGcd(gcd, number);
			lcm = myLcm(lcm, number);
		}
	}

	cout << "GCD: " << gcd << endl;
	cout << "LCM: " << lcm << endl;
}