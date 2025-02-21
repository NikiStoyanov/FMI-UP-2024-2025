#include <iostream>

using namespace std;

const double EPSILON = 1e-9;

double getBiggerNumber(double number1, double number2)
{
	if (fabs(number1 - number2) < EPSILON)
	{
		return number1;
	}
	else
	{
		return number2;
	}
}

int main()
{
	cout << getBiggerNumber(2.01, 3.07) << endl;
	cout << getBiggerNumber(2.01, -3.07) << endl;
	cout << getBiggerNumber(10.01, 10.000001) << endl;

	return 0;
}
