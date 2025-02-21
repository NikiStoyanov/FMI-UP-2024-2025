#include <iostream>

using namespace std;

bool isEven(unsigned number)
{
	unsigned short mask = 1;

	return !(number & mask);
}

int powK(int k)
{
	return 1 << k;
}

bool checkBit(unsigned number, int p)
{
	unsigned short mask = 1;

	mask <<= p;

	return (mask & number) == mask;
}

unsigned setBit(unsigned number, unsigned index)
{
	unsigned short mask = 1;

	mask <<= index;

	return mask | number;
}

unsigned clearBit(unsigned number, unsigned index)
{
	unsigned short mask = 1;

	mask <<= index;

	mask = ~mask;

	return mask & number;
}

unsigned setBitValue(unsigned number, unsigned index, bool value) {
	return value
		? setBit(number, index)
		: clearBit(number, index);
}

int main()
{
	cout << isEven(4) << endl;
	cout << isEven(5) << endl;
	cout << powK(0) << endl;
	cout << checkBit(8, 1) << endl;
	cout << setBit(2, 0) << endl;
}