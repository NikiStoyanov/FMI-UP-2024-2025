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

void reverseArray(int* arr, unsigned length)
{
	for (unsigned i = 0; i < length / 2; i++)
	{
		int t = arr[i];
		arr[i] = arr[length - 1 - i];
		arr[length - 1 - i] = t;
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

	printArray(arr, length);
	reverseArray(arr, length);
	printArray(arr, length);
}