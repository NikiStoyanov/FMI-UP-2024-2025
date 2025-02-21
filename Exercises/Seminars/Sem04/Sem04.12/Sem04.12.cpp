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

int concatenateNumber(int firstNumber, int secondNumber) 
{
	return firstNumber * pow(10, digitsCount(secondNumber)) + secondNumber;
}

int main()
{
	cout << concatenateNumber(23, 89) << endl;
	cout << concatenateNumber(2345, 63) << endl;
	cout << concatenateNumber(5, 34) << endl;

	return 0;
}
