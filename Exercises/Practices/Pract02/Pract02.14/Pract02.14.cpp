#include <iostream>

using namespace std;

int main()
{

	double a, b;
	char o;
	cin >> a >> o >> b;

	switch (o)
	{
	case '+': cout << a + b << endl; break;
	case '-': cout << a - b << endl; break;
	case '*': cout << a * b << endl; break;
	case '/': cout << a / b << endl; break;
	default: cout << "Invalid input" << endl; break;
	}

	return 0;
}
