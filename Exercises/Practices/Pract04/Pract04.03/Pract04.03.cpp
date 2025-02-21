#include <iostream>

using namespace std;

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

int main()
{
	cout << isDigit('3') << endl;
	cout << isDigit('!') << endl;
	cout << isLower('f') << endl;
	cout << isLower('Q') << endl;
	cout << isUpper('A') << endl;
	cout << isUpper('a') << endl;

	return 0;
}
