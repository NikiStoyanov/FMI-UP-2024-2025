#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a, b;
	cin >> a >> b;

	int sum = a + b;
	int maxDifference = 0;
	int previousSum = sum;
	bool areEqual = true;

	for (int i = 1; i < n; i++)
	{
		cin >> a >> b;
		int currentSum = a + b;

		if (currentSum != previousSum)
		{
			areEqual = false;
			maxDifference = max(maxDifference, abs(currentSum - previousSum));
		}

		previousSum = currentSum;
	}
	
	if (areEqual)
	{
		cout << "Equal sums: " << sum << endl;
	}
	else
	{
		cout << "Different sums. Max Difference: " << maxDifference << endl;
	}

	return 0;
}