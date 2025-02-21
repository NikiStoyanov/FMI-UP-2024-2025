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

void splitNumber(int number, int& odd, int& even)
{
	int length = getNumberLength(number);

	while (number != 0)
	{
		if (length % 2 != 0)
		{
			odd = odd * 10 + number % 10;
		}
		else
		{
			even = even * 10 + number % 10;
		}

		length--;
		number /= 10;
	}

	odd = reverse(odd);
	even = reverse(even);
}

int main()
{
	int number;
	cin >> number;

	int odd = 0, even = 0;

	splitNumber(number, odd, even);

	cout << even << " " << odd << endl;
}