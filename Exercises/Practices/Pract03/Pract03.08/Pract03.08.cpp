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

int main()
{
	int number;
	cin >> number;

	int sum = 0;

	int copy = number;
	int numberLength = getNumberLength(number);

	while (copy != 0)
	{
		sum += pow(copy % 10, numberLength);
		copy /= 10;
	}

	cout << (sum == number) << endl;

	return 0;
}
