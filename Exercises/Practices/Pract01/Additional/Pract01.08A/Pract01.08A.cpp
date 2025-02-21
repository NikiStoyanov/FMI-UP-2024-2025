#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	n < 10 && cout << n << endl;

	n > 10 && n < 100 && cout << ((n % 10) + 1) << endl;

	n >= 100 && cout << (n / 10) << endl;

	return 0;
}
