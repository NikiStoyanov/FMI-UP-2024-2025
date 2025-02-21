#include <iostream>

using namespace std;

int** createMatrix(int rows, int cols)
{
    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];

        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

int getRowSum(const int *const *const matrix, int row, int cols)
{
    if (!matrix)
    {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < cols; i++)
    {
        sum += matrix[row][i];
    }

    return sum;
}

void removeRowsWithOddSum(int** const matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int rowSum = getRowSum(matrix, i, cols);

        if (rowSum % 2 != 0)
        {
            matrix[i] = nullptr;
        }
    }
}

void printMatrix(const int *const *const arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        if (arr[i] != nullptr)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << " ";
            }

            cout << endl;
        }
    }
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int** matrix = createMatrix(rows, cols);

    removeRowsWithOddSum(matrix, rows, cols);

    printMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;

}