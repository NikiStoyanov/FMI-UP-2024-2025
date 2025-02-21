#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	for (int i = number; i >= 1; i--) {
		bool isPrime = true;

		if (i == 2) {
			while (number % i == 0) {
				cout << i << " ";
				number /= i;
			}

			continue;
		}

		if (i == 1 || i % 2 == 0) {
			isPrime = false;
			continue;
		}

		double sqrtN = sqrt(i);
		for (int j = 3; j <= sqrtN; j += 2) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			while (number % i == 0) {
				cout << i << " ";
				number /= i;
			}
		}
	}
	return 0;
}
