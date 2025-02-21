#include <iostream>

const unsigned MAX_SIZE = 1001;

void initArray(bool* arr, unsigned size, bool value)
{
	for (unsigned i = 0; i < size; i++)
	{
		arr[i] = value;
	}
}

void markAsNotPrime(bool* primes, unsigned size, unsigned startNumber)
{
	for (int i = startNumber * startNumber; i < size; i += startNumber)
	{
		primes[i] = false;
	}
}

void calculateEratosthenesSieve(bool* primes, unsigned size)
{
	primes[0] = primes[1] = false;

	int sqrtOfSize = sqrt(size);

	for (unsigned i = 2; i < sqrtOfSize; i++) {
		if (!primes[i]) {
			continue;
		}

		markAsNotPrime(primes, size, i);
	}
}

void printSieve(const bool* primes, unsigned size) {
	for (unsigned i = 0; i < size; i++) {
		if (primes[i]) {
			std::cout << i << " ";
		}
	}
}

int main() {
	bool sieve[MAX_SIZE];
	int size;
	std::cin >> size;

	initArray(sieve, size, true);
	calculateEratosthenesSieve(sieve, size);
	printSieve(sieve, size);
}