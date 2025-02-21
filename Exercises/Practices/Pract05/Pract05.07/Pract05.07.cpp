#include <iostream>

using namespace std;

int getNumberLength(int number)
{
	int count = 0;

	while (number != 0)
	{
		count++;
		number /= 10;
	}

	return count;
}

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

int cutNumber(int number, int start, int end)
{
	int length = getNumberLength(number);

	for (int i = 0; i < length - 1 - end; i++)
	{
		number /= 10;
	}

	number = reverse(number);

	for (int i = 0; i < start; i++)
	{
		number /= 10;
	}

	number = reverse(number);

	return number;
}

int main()
{
	int number, start, end;
	cin >> number >> start >> end;

	cout << cutNumber(number, start, end) << endl;
}