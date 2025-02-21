#include <iostream>

using namespace std;

int reverse(int number)
{
	if (number < 0) 
	{
		cout << "Invalid input!" << endl;
		return -1;
	}

	int result = 0;

	while (number != 0)
	{
		result = result * 10 + number % 10;

		number /= 10;
	}

	return result;
}

int main()
{
	cout << reverse(288) << endl;
	cout << reverse(-28) << endl;

	return 0;
}
