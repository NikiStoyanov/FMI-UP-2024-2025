#include <iostream>

using namespace std;

int reverse(int number)
{
	int reversed = 0;

	while (number != 0)
	{
		int lastDigit = number % 10;

		reversed = reversed * 10 + lastDigit;

		number /= 10;
	}

	return reversed;
}

int main()
{
	int number;
	cin >> number;

    cout << reverse(number);
}