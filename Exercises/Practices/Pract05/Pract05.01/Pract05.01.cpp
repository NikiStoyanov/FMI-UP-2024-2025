#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 5, b = 6;
	double c = 5.05, d = 6.06;

	swap(a, b);
	swap(c, d);

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

	return 0;
}
