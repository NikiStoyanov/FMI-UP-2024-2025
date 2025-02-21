#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;

	int e = a % 10;
	int d = a / 10 % 10;
	int s = a / 100;

	int newNumber = (e * 100) + (d * 10) + s + 1;

	cout << newNumber << endl;

	return 0;
}
