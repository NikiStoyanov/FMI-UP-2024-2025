#include <iostream>

using namespace std;

void isRowEvenOrOdd(int n)
{
	double element = 1;

	for (int i = 1; i <= n; i++)
	{
		element = (element * 3) / 2;
	}

	if ((int)element % 2 == 0)
	{
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd" << endl;
	}
}

int main()
{
	int n;
	cin >> n;

	isRowEvenOrOdd(n);
}