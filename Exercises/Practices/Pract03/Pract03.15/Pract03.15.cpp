#include <iostream>

using namespace std;

int main()
{
	int k, number;
	cin >> k >> number;

	int suffixesCount = 0;
	int maxSuffix = 0;
	
	while (number != 0)
	{
		int copyN = number, copyK = k;
		int currentSuffix = 0;
		bool isSuffix = true;

		while (copyN != 0)
		{
			if (copyN % 10 != copyK % 10)
			{
				isSuffix = false;
				break;
			}

			currentSuffix = currentSuffix * 10 + copyN % 10;
			copyN /= 10;
			copyK /= 10;
		}

		if (isSuffix)
		{
			suffixesCount++;
			if (currentSuffix > maxSuffix)
			{
				maxSuffix = currentSuffix;
			}
		}

		cin >> number;
	}

	cout << "Count of suffixes: " << suffixesCount << endl;

	if (suffixesCount > 0)
	{
		int max = 0;

		while (maxSuffix != 0)
		{
			max = max * 10 + maxSuffix % 10;
			maxSuffix /= 10;
		}

		cout << "Max suffix: " << max << endl;
	}

	return 0;
}
