#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;

	int i = firstNumber < secondNumber ? secondNumber : firstNumber;
	while (i % firstNumber != 0 || i % secondNumber != 0) {
		i++;
	}

	cout << i << endl;

	return 0;
}
