#include <iostream>

using namespace std;

int main()
{
	int number, f1 = 0, f2 = 1;
	cin >> number;

	if (number >= 1)
	{
		cout << 0 << " ";
	}

	for (int i = 2; i <= number; i++)
	{

		cout << f2 << " ";

		int t = f1;
		f1 = f2;
		f2 = t + f2;
	}

	cout << endl;

	return 0;
}
