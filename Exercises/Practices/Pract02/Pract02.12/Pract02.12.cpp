#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0) 
	{
		cout << "Invalid input!" << endl;
		return 0;
	}

	if (a < (b + c) && b < (a + c) && c < (a + b))
	{
		cout << "This triangle exists." << endl;
	}
	else
	{
		cout << "This triangle doesn't exists." << endl;
	}

	return 0;
}
