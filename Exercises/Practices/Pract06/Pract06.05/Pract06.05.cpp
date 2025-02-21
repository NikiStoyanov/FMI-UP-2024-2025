#include <iostream>

using namespace std;

constexpr int MAX_SIZE = 10;

bool containsDigit(int number, int digit)
{
	while (number != 0)
	{
		if (number % 10 == digit)
		{
			return true;
		}

		number /= 10;
	}

	return false;
}

void modifyArray(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (!containsDigit(arr[i], i))
		{
			arr[i] = 0;
		}
	}
}

void printArray(const int* arr, unsigned length)
{
	for (unsigned i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[MAX_SIZE] = { 45, 62, 23, 47, 47, 65, 100 };

	modifyArray(arr, MAX_SIZE);

	printArray(arr, MAX_SIZE);
}