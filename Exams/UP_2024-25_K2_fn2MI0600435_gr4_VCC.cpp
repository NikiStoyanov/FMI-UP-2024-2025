//Nikolay Stoyanov 2MI0600435

#include <iostream>

using namespace std;

bool isInfix(int number, int infix)
{
    number /= 10;

    bool isCheckStarted = false;

    while (number != 0 && infix != 0)
    {
        if (number % 10 != infix % 10)
        {
            if (isCheckStarted) return false;
            
            number /= 10;
        }
        else {
            isCheckStarted = true;

            infix /= 10;
            number /= 10;
        }
    }

    return number != 0;
}

int main()
{
    int n, k;
    cin >> n >> k;

    if (n <= 0 || k <= 0)
    {
        cout << "N and K must be positive!" << endl;
        return 0;
    }

    cout << isInfix(n, k) << endl;

    return 0;
}