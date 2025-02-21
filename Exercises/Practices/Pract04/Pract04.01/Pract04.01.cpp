#include <iostream>

using namespace std;

int myAbs(int number)
{
	if (number >= 0)
	{
		return number;
	}
	else
	{
		return -number;
	}
}

int main()
{
	cout << myAbs(-6) << endl;
	cout << myAbs(21) << endl;

	return 0;
}
