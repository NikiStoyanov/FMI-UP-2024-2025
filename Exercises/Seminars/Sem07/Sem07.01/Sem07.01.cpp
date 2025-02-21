#include <iostream>

using namespace std;

const int MAX_SIZE = 256;

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cin >> matrix[row][col];
        }
    }
}

void scalarAdditionToMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    int scalar;
    cout << "Enter scalar: ";
    cin >> scalar;

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            matrix[row][col] += scalar;
        }
    }
}

void printMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << matrix[row][col] << " ";
        }

        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter cols: ";
    cin >> cols;

    int arr[MAX_SIZE][MAX_SIZE];

    readMatrix(arr, rows, cols);

    printMatrix(arr, rows, cols);

    scalarAdditionToMatrix(arr, rows, cols);

    printMatrix(arr, rows, cols);

    return 0;
}
