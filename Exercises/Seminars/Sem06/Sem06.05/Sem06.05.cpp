#include <iostream>

using namespace std;

constexpr unsigned MAX_SIZE = 1024;

bool isValidLength(unsigned length)
{
	return 0 < length && length <= MAX_SIZE;
}

void readArray(int* arr, unsigned length)
{
	for (unsigned i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
}

int searchBinary(int* arr, unsigned length, int value)
{
	int leftIndex = 0, rightIndex = length - 1;

	while (leftIndex < rightIndex)
	{
		int midIndex = leftIndex + (rightIndex - leftIndex) / 2;

		if (value < arr[midIndex])
		{
			rightIndex = midIndex - 1;
		}
		else if (value > arr[midIndex])
		{
			leftIndex = midIndex + 1;
		}
		else 
		{
			return midIndex;
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
	int arr[MAX_SIZE];

	unsigned length;
	do
	{
		cin >> length;
	}
	while (!isValidLength(length));

	readArray(arr, length);

	cout << searchBinary(arr, length, 5);
}