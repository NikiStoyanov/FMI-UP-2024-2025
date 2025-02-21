#include <iostream>

using namespace std;

bool areOnOneCircle(int p1x, int p1y, int p2x, int p2y) {
	return p1x * p1x + p1y * p1y == p2x * p2x + p2y * p2y;
}

int main()
{
	cout << areOnOneCircle(1, 0, 0, 1) << endl;

	return 0;
}
