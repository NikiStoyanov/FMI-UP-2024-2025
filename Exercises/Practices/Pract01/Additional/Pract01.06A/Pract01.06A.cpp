#include <iostream>

using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << ((b > a) && (c > b) && (d > c)) << endl;

	return 0;
}
