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

int replaceDigitFromLeft(int number, int k, int newDigit)
{
    int reversed = 0, power = 1;
    int length = countDigits(number);
    int pos = length;

    while (number > 0)
    {
        int digit = number % 10;

        if (pos == k)
        {
            digit = newDigit;
        }

        reversed = reversed * 10 + digit;
        number /= 10;
        pos--;
    }

    int result = 0;
    while (reversed > 0)
    {
        result = result * 10 + (reversed % 10);
        reversed /= 10;
    }

    return result;
}

void modifyNumbers(int& m, int& n, int k)
{
    int digitOfN = getDigitFromLeft(n, k);
    int digitOfM = getDigitFromLeft(m, k);

    n = replaceDigitFromLeft(n, k, digitOfM);
    m = replaceDigitFromLeft(m, k, digitOfN);
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    modifyNumbers(n, m, k);

    cout << n << " " << m << endl;

    return 0;
}