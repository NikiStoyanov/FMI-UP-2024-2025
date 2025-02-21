// Nikolay Stoyanov 2MI0600435

#include <iostream>

using namespace std;

constexpr int MAX_SIZE = 1024;

int* binaryToDecimalMatrix(const bool* const* binary, int rows, int cols)
{
    int result[MAX_SIZE];

    for (int i = 0; i < rows; i++)
    {
        int number = 0;

        for (int j = 0; j < cols; j++)
        {
            number += binary[i][j] * pow(2, cols - j -1);
        }

        result[i] = number;
    }

    for (int j = 0; j < rows; j++)
    {
        cout << result[j];
    }

    return result;
}

int main()
{
    int rows = 4, cols = 3;
    bool binary[][MAX_SIZE] =
    { 
        {1, 0, 1}, 
        {0, 1, 1}, 
        {1, 1, 1}, 
        {1, 0, 0}
    };

    binaryToDecimalMatrix(binary, rows, cols);

    return 0;
}