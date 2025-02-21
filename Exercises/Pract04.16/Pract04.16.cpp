#include <iostream>

using namespace std;

int getDivision(int first, int second)
{
	for (int i = 0; i <= first; i++)
	{
		if (i * second > first)
		{
			return i - 1;
		}
	}
}

int getRemainder(int first, int second)
{
	return first - second * getDivision(first, second);
}

int main()
{
	cout << getRemainder(5, 2) << endl;
	cout << getRemainder(2, 2) << endl;
	cout << getRemainder(4, 2) << endl;
	cout << getRemainder(0, 2) << endl;
	cout << getRemainder(51, 7) << endl;

	return 0;
}
