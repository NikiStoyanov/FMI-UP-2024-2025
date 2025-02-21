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

void swap(int* arr, unsigned firstIndex, unsigned secondIndex)
{
	int t = arr[firstIndex];
	arr[firstIndex] = arr[secondIndex];
	arr[secondIndex] = t;
}

void selectionSort(int* arr, unsigned length)
{
	for (unsigned i = 0; i < length; i++)
	{
		int minElementIndex = i;

		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[minElementIndex])
			{
				minElementIndex = j;
			}
		}

		swap(arr, i, minElementIndex);
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
	selectionSort(arr, length);
	printArray(arr, length);
}