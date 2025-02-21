#include <iostream>

using namespace std;

bool isPalindrome(int number)
{
	int result = 0, copy = number;

	while (copy != 0)
	{
		result = result * 10 + copy % 10;

		copy /= 10;
	}

	return result == number;
}

int main()
{
	cout << isPalindrome(8228) << endl;
	cout << isPalindrome(8278) << endl;

	return 0;
}
