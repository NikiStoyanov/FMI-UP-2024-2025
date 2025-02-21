#include <iostream>

using namespace std;

int log_kN(int n, int k)
{

	for (int i = 0; i < n; i++)
	{
		if (pow(k, i) > n)
		{
			return i - 1;
		}
	}

	return 0;
}

int main()
{
	cout << log_kN(90, 3) << endl;

	return 0;
}
