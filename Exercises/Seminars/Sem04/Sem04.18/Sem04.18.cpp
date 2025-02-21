#include <iostream>

using namespace std;

bool isCapitalLetter(char symbol)
{
	return symbol >= 'A' && symbol <= 'Z';
}

int main()
{
	cout << isCapitalLetter('A') << endl;
	cout << isCapitalLetter('!') << endl;

	return 0;
}
