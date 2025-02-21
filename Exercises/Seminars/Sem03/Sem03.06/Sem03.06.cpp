#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	
	if (number == 1)
	{
		cout << "Not prime" << endl;
		return 0;
	}

	int sqrtN = sqrt(number);
	for (int i = 2; i <= sqrtN; i++)
	{
		if (number % i == 0)
		{
			cout << "Not prime" << endl;
			return 0;
		}
	}

	cout << "Prime" << endl;

	return 0;
}
