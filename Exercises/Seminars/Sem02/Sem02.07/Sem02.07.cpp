#include <iostream>

using namespace std;

int main()
{
	int r, x, y;
	cin >> r >> x >> y;

	if (x * x + y * y < r * r)
	{
		cout << "In the circle" << endl;
	}
	else if (x * x + y * y == r * r)
	{
		cout << "On the circle" << endl;
	}
	else
	{
		cout << "Out of the circle" << endl;
	}

	return 0;
}
