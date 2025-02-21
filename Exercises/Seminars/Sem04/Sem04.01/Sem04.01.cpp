#include <iostream>

using namespace std;

int pow(int n, int k)
{
	if (k == 0) return 1;

	int result = 1;

	for (int i = 0; i < k; i++)
	{
		result *= n;
	}

	return result;
}

int main()
{
	cout << pow(2, 5) << endl;
	cout << pow(2, 0) << endl;

	return 0;
}
