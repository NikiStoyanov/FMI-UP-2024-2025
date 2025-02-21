#include <iostream>

using namespace std;

double myAbs(double number) {
	return number >= 0 ? number : -number;
}

double sqrt_a(double a, double eps) {
	if (a == 0) return 0;

	double xk;
	double xk1 = a;

	do {
		xk = xk1;
		xk1 = (xk + a / xk) / 2;
	} while (myAbs(xk - xk1) >= eps);

	return xk1;
}

int main() {
	cout.precision(100);
	cout << sqrt_a(1/2, 1e-3);

	return 0; 
}
