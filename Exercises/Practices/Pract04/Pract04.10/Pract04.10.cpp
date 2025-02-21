#include <iostream>

using namespace std;

int countDigits(int number)
{
    int count = 0;

    while (number != 0)
    {
        number /= 10;
        count++;
    }

    return count;
}

int getDigitFromLeft(int number, int k)
{
    int length = countDigits(number);

    for (int i = 0; i < length - k; i++)
    {
        number /= 10;
    }

    return number % 10;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << getDigitFromLeft(n, k);
}