#include <iostream>

using namespace std;

const double EPSILON = 1e-9;

double averageSum(int number)
{
    int sum = 0, count = 0;

    while (number != 0)
    {
        sum += number % 10;
        count++;
        number /= 10;
    }

    return sum / count;
}

bool isAverageSumBiggerThanK(int number, int k)
{
    return abs(averageSum(number) - k) < EPSILON;
}

int main()
{
    int m, n, k;
    cin >> m >> n >> k;

    if (m <= 0 || m >= n || n > 1000000)
    {
        cout << "Invalid input!";
        return 0;
    }

    for (int i = m; i <= n; i++)
    {
        if (isAverageSumBiggerThanK(i, k))
        {
            cout << i << " ";
        }
    }
}