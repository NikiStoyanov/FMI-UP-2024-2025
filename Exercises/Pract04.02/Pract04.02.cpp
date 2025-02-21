#include <iostream>

using namespace std;

bool isEven(size_t number)
{
	return number % 2 == 0;
}

int main()
{
	cout << isEven(2) << endl;
	cout << isEven(5) << endl;

	return 0;
}
