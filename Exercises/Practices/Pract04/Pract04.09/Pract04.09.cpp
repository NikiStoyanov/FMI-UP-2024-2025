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

int lcm(const int a, const int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

    return abs(a * b) / gcd(a, b);
}

int main()
{
	std::cout << lcm(8, 6) << std::endl;
	std::cout << lcm(15, 12) << std::endl;
}