#include <iostream>

using namespace std;

int sum(const int* const* matrix, int N) {
	int sum = 0;

	for (size_t i = 0; i < N - 1; i++) {
		sum += matrix[i][i + 1];
	}

	return sum;
}

int main() {

	return 0; 
}
