#include <iostream>

using namespace std;

bool isPrefix(int n, int k)
{
	while (n != 0)
	{
		if (n == k)
		{
			return true;
		}

		n /= 10;
	}

	return false;
}

int main()
{
	cout << isPrefix(288, 88) << endl;
	cout << isPrefix(288, 28) << endl;

	return 0;
}
