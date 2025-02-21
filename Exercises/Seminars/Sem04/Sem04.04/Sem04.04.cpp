#include <iostream>

using namespace std;

bool isSuffix(unsigned int n, unsigned int k) {
	if (n < k) {
		return false;
	}

	while (k != 0) {
		if (n % 10 != k % 10) {
			return false;
		}

		n /= 10;
		k /= 10;
	}

	return true;
}

int main()
{
	cout << isSuffix(289, 89) << endl;
	cout << isSuffix(28, 2) << endl;

	return 0;
}
