#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int sum = 0;

	a % 2 != 0 && (sum += a);
	b % 2 != 0 && (sum += b);
	c % 2 != 0 && (sum += c);
	d % 2 != 0 && (sum += d);
	e % 2 != 0 && (sum += e);

	cout << sum << endl;

	return 0;
}
