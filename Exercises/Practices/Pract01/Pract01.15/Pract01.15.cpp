#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int e = a % 10;
    int d = a / 10 % 10;
    int s = a / 100 % 10;
    int h = a / 1000;

    int product = e * d * s * h;
    cout << "Product: " << product << endl;

    double average = (e + d + s + h) / 4.0;
    cout << "Average: " << average << endl;

	return 0;
}
