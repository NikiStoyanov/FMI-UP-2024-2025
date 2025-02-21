#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

	long long result = 1;

	for (int i = n; i <= m; i++)
	{
		result *= i;
	}

	cout << result << endl;
}