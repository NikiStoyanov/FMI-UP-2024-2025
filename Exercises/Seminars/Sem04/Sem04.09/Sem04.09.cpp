#include <iostream>

using namespace std;

int myAbs(int number) {
	return number >= 0 ? number : -number;
}

int main()
{
	cout << myAbs(23) << endl;
	cout << myAbs(-3) << endl;
	cout << myAbs(5) << endl;
	cout << myAbs(-87) << endl;
	cout << myAbs(0) << endl;

	return 0;
}
