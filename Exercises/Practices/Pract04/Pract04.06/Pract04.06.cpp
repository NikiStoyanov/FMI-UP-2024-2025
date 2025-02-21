#include <iostream>

using namespace std;

char toCharacter(int number)
{
	if (number >= 0 && number <= 9)
	{
		return '0' + number;
	}
}

int toNumber(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return ch - '0';
	}
}

int main()
{
	cout << toNumber('8') << endl;
	cout << toCharacter(4) << endl;

	return 0;
}
