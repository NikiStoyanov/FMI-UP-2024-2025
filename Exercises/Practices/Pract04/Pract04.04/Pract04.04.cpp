#include <iostream>

using namespace std;

bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

char toLower(char ch)
{
	if (isUpper(ch))
	{
		return ch - 'A' + 'a';
	}
}

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

char toUpper(char ch)
{
	if (isLower(ch))
	{
		return ch - 'a' + 'A';
	}
}

int main()
{
	cout << toLower('C') << endl;
	cout << toUpper('m') << endl;
	cout << toUpper('!') << endl;

	return 0;
}
