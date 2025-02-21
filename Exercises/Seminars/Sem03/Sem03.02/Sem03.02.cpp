#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	int reversed = 0;
	while (number != 0)
	{
		int lastDigit = number % 10;

		reversed = reversed * 10 + lastDigit;

		number /= 10;
	}


	cout << reversed + 1 << endl;

	return 0;
}
