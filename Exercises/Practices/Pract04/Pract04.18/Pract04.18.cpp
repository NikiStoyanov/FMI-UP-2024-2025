#include <iostream>

using namespace std;

int squareRootToLower(int number)
{
	for (int i = 0; i < number / 2 + 1; i++)
	{
		if (i * i > number)
		{
			return i - 1;
		}
	}
}

int main()
{
	cout << squareRootToLower(24) << endl;
	cout << squareRootToLower(49) << endl;
	cout << squareRootToLower(52) << endl;
	cout << squareRootToLower(0) << endl;
	cout << squareRootToLower(1) << endl;
	cout << squareRootToLower(2) << endl;

	return 0;
}
