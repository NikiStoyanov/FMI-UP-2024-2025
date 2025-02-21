#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = n / 3;

	cout << (3 * ((count * (count + 1)) / 2)) << endl;

	return 0;
}
