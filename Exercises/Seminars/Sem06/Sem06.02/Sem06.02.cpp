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

bool searchLinear(int* arr, unsigned length, int value) 
{
	for (unsigned i = 0; i < length; i++) 
	{
		if (arr[i] == value) return true;
	}

	return false;
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

	cout << searchLinear(arr, length, 5);

}