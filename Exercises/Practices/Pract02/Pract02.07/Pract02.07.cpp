#include <iostream>

using namespace std;

int main()
{
	int x1, y1, x2, y2, x, y;
	cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

	cout << ((x > x1 && x < x2) && (y > y2 && y < y1)) << endl;

	return 0;
}
