#include <iostream>

using namespace std;

int main()
{
	int year;
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 400 == 0)
		{
			cout << "Leap year" << endl;
			return 0;
		}

		if (year % 100 == 0)
		{
			cout << "Not leap year" << endl;
		}
		else
		{
			cout << "Leap year" << endl;
		}

	}
	else
	{
		cout << "Not leap year" << endl;
	}

	return 0;
}
