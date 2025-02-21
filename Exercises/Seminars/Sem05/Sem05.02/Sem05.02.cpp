#include <iostream>

using namespace std;

void toUpper(char& symbol)
{
	symbol += 'A' - 'a';
}

void toLower(char& symbol)
{
	symbol += 'a' - 'A';
}

int main()
{
	char a = 'a', b = 'B';

	toUpper(a);
	toLower(b);

	cout << a << " " << b << endl;

	return 0;
}
