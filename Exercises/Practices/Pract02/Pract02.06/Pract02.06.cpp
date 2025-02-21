#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	if (number > 0)
	{
		cout << (number % 2 == 0) << endl;
	}
	else if (number < 0)
	{
		cout << (number < -5) << endl;
	}
}
