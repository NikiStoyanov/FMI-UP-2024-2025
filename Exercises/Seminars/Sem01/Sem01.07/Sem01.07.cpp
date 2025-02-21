#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int hundreds = n / 100;
    n -= hundreds * 100;

    int fifties = n / 50;
    n -= fifties * 50;

    int twenties = n / 20;
    n -= twenties * 20;

    int tens = n / 10;
    n -= tens * 10;

    int fives = n / 5;
    n -= fives * 5;

    int twos = n / 2;
    n -= twos * 2;

    cout << hundreds << "x100lv " << fifties << "x50lv " << twenties << "x20lv " << tens << "x10lv " << fives << "x5lv " << twos << "x2lv " << n << "x1lv " << endl;
}
