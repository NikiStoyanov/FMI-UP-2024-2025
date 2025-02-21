#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int firstNumber = n / 1000;
	int secondNumber = n % 1000;

	cout << (firstNumber < secondNumber) << endl;

	return 0;
}
