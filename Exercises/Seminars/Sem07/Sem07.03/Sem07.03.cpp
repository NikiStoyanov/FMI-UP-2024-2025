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

void transponateMatrix(int matrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            result[col][row] = matrix[row][col];
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

    int matrix[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];

    readMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    transponateMatrix(matrix, result, rows, cols);
    printMatrix(result, cols, rows);

    return 0;
}
