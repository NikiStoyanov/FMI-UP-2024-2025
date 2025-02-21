#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	if (n > 255 || n < 0 || m > 255 || m < 0)
	{
		cout << "Invalid codes!" << endl;
		return 0;
	}

	for (int i = n; i <= m; i++)
	{
		cout << i << " --> " << (char)i << endl;
	}

	return 0;
}
