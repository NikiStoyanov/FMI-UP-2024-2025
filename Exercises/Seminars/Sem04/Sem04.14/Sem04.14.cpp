#include <iostream>

using namespace std;

int countOfDividers(int number)
{
	int count = 0;
	
	for (int i = 2; i * i <= number; i++) {
		if (number % i == 0)
		{
			count++;

			while (number % i == 0) {
				number /= i;
			}
		}
	}

	if (number > 1) {
		count++;
	}

	return count;
}

int countOfOccurrences(int startNumber, int endNumber, int k)
{
	int count = 0;

	for (int i = startNumber; i <= endNumber; i++)
	{
		if (countOfDividers(i) == k)
		{
			count++;
		}
	}

	return count;
}

int main()
{
	cout << countOfOccurrences(19, 32, 3) << endl;
	cout << countOfOccurrences(19, 42, 3) << endl;

	return 0;
}
