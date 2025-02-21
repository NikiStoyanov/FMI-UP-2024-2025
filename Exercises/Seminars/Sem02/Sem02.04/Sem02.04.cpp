#include <iostream>

using namespace std;

int main()
{
	char figure;
	cin >> figure;

	switch (figure)
	{
	case 's':
		double side;
		cin >> side;

		cout << side * side << endl;
		break;
	case 'r':
		double a, b;
		cin >> a >> b;

		cout << a * b << endl;
		break;
	case 'c':
		double radius;
		cin >> radius;

		cout << radius * radius * 2 * acos(0.0) << endl;
		break;
	case 't':
		double c, hc;
		cin >> c >> hc;

		cout << (c * hc) / 2 << endl;
		break;
	}
}
