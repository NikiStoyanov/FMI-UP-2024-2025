#include <iostream>

using namespace std;

int main()
{
	double a;
	cin >> a;

	int res = a / 1;

	if (res * 1 == a)
	{
		cout << "Integer" << endl;
	}
	else 
	{
		cout << "Not an integer" << endl;
	}

	return 0;
}
