#include <iostream>

using namespace std;

int main()
{
	const char CAPITAL_TO_LOWER = 'a' - 'A';

	char firstSetStart, firstSetEnd, secondSetStart, secondSetEnd, symbol;
	cin >> firstSetStart >> firstSetEnd >> secondSetStart >> secondSetEnd >> symbol;

	if (symbol >= 'A' && symbol <= 'Z')
	{
		symbol += CAPITAL_TO_LOWER;
	}

	if (firstSetStart >= 'A' && firstSetEnd <= 'Z')
	{
		firstSetStart += CAPITAL_TO_LOWER;
		firstSetEnd += CAPITAL_TO_LOWER;
	}

	if (secondSetStart >= 'A' && secondSetEnd <= 'Z')
	{
		secondSetStart += CAPITAL_TO_LOWER;
		secondSetEnd += CAPITAL_TO_LOWER;
	}

	bool isInFirst = symbol >= firstSetStart && symbol <= firstSetEnd;
	bool isInSecond = symbol >= secondSetStart && symbol <= secondSetEnd;

	bool isUnion = isInFirst || isInSecond;
	bool isIntersection = isInFirst && isInSecond;
	bool isDifference = isInFirst && !isInSecond;
	bool isInOnlySet = isUnion && !isIntersection;

	cout << boolalpha << isUnion << ", ";
	cout << boolalpha << isIntersection << ", ";
	cout << boolalpha << isDifference << ", ";
	cout << boolalpha << isInOnlySet << endl;
}
