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

int main()
{
	cout << getDivision(5, 2) << endl;
	cout << getDivision(2, 2) << endl;
	cout << getDivision(4, 2) << endl;
	cout << getDivision(0, 2) << endl;
	cout << getDivision(51, 7) << endl;

	return 0;
}
