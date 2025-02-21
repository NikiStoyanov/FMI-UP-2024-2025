#include <iostream>

using namespace std;

char capitalizeLetter(char symbol)
{

	return symbol >= 'a' && symbol <= 'z' ? symbol + 'A' - 'a' : symbol;
}

int main()
{
	cout << capitalizeLetter('g') << endl;
	cout << capitalizeLetter('!') << endl;

	return 0;
}
