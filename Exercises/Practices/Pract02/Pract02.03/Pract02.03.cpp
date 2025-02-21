#include <iostream>

using namespace std;

int main()
{
	char a;
	cin >> a;

	if (a == 'I' || a == 'V' || a == 'X' || a == 'L' || a == 'C' || a == 'D' || a == 'M')
	{
		cout << (int)a << endl;
	}
	else
	{
		cout << -1 << endl;
	}

	return 0;
}
