#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << ((a >= c && a <= d) || (b >= c && b <= d) || (c >= a && c <= b) || (d >= a && d <= b)) << endl;

	return 0;
}
