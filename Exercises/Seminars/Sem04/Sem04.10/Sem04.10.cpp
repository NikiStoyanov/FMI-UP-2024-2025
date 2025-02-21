#include <iostream>

using namespace std;

int digitsCount(int number) {
	int count = 0;

	if (number == 0) return 1;
	
	while (number > 0)
	{
		count++;
		number /= 10;
	}

	return count;
}

int main()
{
	cout << digitsCount(2389) << endl;
	cout << digitsCount(234563) << endl;
	cout << digitsCount(534) << endl;
	cout << digitsCount(87) << endl;
	cout << digitsCount(0) << endl;

	return 0;
}
