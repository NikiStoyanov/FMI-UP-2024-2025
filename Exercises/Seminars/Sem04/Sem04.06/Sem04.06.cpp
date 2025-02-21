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

bool isInfix(unsigned int n, unsigned int k) {

	while (n >= k) {
		if (isSuffix(n, k)) {
			return true;
		}

		n /= 10;
	}

	return false;
}

int main()
{
	cout << isInfix(2688, 68) << endl;
	cout << isInfix(238, 38) << endl;
	cout << isInfix(238, 8) << endl;

	return 0;
}
