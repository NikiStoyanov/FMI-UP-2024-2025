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

void additionOfTwoMatrices(int matrixA[MAX_SIZE][MAX_SIZE], int matrixB[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            result[row][col] = matrixA[row][col] + matrixB[row][col];
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

    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixB[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];

    readMatrix(matrixA, rows, cols);
    readMatrix(matrixB, rows, cols);

    additionOfTwoMatrices(matrixA, matrixB, result, rows, cols);

    printMatrix(result, rows, cols);

    return 0;
}
