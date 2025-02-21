#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int gcd = a > b ? b : a;

	while (a % gcd != 0 || b % gcd != 0)
	{
		gcd--;
	}

	return gcd;
}

int main()
{
	cout << gcd(8, 6) << endl;
	cout << gcd(15, 12) << endl;
}