#include <iostream>

using namespace std;

int reverseNumber(int number)
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

int digitsCount(int number) {
	int count = 0;

	if (number == 0) return 1;

	while (number > 0)
	{
		count++;
		number /= 10;
	}

	return count;
}

int concatenateNumber(int number)
{
	return reverseNumber(number) * pow(10, digitsCount(number)) + number;
}

int main()
{
	cout << concatenateNumber(23) << endl;
	cout << concatenateNumber(2345) << endl;
	cout << concatenateNumber(34) << endl;

	return 0;
}
