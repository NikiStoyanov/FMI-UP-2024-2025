#include <iostream>

using namespace std;

const int MAX_SIZE = 128;

const char TERMINATE_SYMBOL = '\0';

unsigned strLen(const char* str)
{
	if (!str)
	{
		return 0;
	}

	unsigned index = 0;
	while (str[index] != TERMINATE_SYMBOL)
	{
		index++;
	}

	return index;
}

void modify(char* text, const char* where, const char* what)
{
	while (*text != TERMINATE_SYMBOL)
	{
		cout << &text << ": " << *text << endl;

		text++;
	}
}

int main()
{
	char text[MAX_SIZE], where[MAX_SIZE], what[MAX_SIZE];

	cin.getline(text, MAX_SIZE);
	cin.getline(where, MAX_SIZE);
	cin.getline(what, MAX_SIZE);

	modify(text, where, what);
}