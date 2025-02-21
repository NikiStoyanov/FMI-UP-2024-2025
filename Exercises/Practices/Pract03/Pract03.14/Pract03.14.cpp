#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0, maxNumber = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		if (number > maxNumber)
		{
			maxNumber = number;
		}
		sum += number;
	}

	if (sum - maxNumber == maxNumber)
	{
		cout << "Yes: " << maxNumber << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}