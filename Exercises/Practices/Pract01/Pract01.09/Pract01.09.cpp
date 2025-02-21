#include <iostream>

using namespace std;

int main()
{
	double celsius;
	cin >> celsius;

	double fahrenheit = celsius * (9.0 / 5) + 32;

	cout << fahrenheit << endl;

	return 0;
}
