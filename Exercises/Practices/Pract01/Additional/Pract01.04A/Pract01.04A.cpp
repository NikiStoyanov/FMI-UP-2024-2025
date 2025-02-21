#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	cout << (a < (b + c) && b < (a + c) && c < (a + b)) << endl;

	return 0;
}
