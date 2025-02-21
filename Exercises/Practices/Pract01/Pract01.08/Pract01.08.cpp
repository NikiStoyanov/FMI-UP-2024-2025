#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	bool marker = n % 2 == 0;

	marker && (cout << n / 2 << endl) || (cout << n * 3 << endl);

	return 0;
}
