#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;

	int i = firstNumber > secondNumber ? secondNumber : firstNumber;
	while (firstNumber % i != 0 || secondNumber % i != 0) 
	{
		i--;
	}

	cout << i << endl;

	return 0;
}
