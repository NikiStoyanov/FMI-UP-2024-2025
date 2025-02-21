#include <iostream>

using namespace std;

double distanceBetweenTwoPoints(double X1, double Y1, double X2, double Y2) {

	return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

double calculatePerimeter(double aX, double aY, double bX, double bY, double cX, double cY) {

	return 
		distanceBetweenTwoPoints(aX, aY, bX, bY) +
		distanceBetweenTwoPoints(aX, aY, cX, cY) +
		distanceBetweenTwoPoints(bX, bY, cX, cY);
}

int main()
{
	cout << calculatePerimeter(1, 1, 4, 7, 0, 10) << endl;

	return 0;
}
