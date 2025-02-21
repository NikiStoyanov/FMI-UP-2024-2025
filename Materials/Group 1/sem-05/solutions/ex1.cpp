#include <iostream>

const int SIZE = 5;

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

  std::cout << std::endl;
}

int main()
{
  int arr[SIZE] = {1, 2, 3, 4, 5};
  printArray(arr, SIZE);
  return 0;
}
