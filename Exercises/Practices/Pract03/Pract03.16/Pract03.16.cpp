#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	int number = 1;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			cout << number << " ";

			if (i % 2 == 0)
			{
				number++;
			}
			else
			{
				number--;
			}
		}

		if (i % 2 == 0)
		{
			number += 2;
		}
		else
		{
			number += 4;
		}
		
		cout << " " << endl;
	}

	return 0;
}
