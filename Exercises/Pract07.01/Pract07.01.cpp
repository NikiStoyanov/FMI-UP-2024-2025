#include <iostream>

using namespace std;

constexpr unsigned MAX_SIZE = 100;

void readMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned cols) {
	for (unsigned i = 0; i < rows; i++) {
		for (unsigned j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[][MAX_SIZE], unsigned rows, unsigned cols) {
	for (unsigned i = 0; i < rows; i++) {
		for (unsigned j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}
}

int getMaxElement(const int matrix[][MAX_SIZE], unsigned rows, unsigned cols) {
	int max = 0;
	for (unsigned i = 0; i < rows; i++) {
		for (unsigned j = 0; j < cols; j++) {
			if (matrix[i][j] >= max)
			{
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int getMinElement(const int matrix[][MAX_SIZE], unsigned rows, unsigned cols) {
	int min = getMaxElement(matrix, rows, cols);

	for (unsigned i = 0; i < rows; i++) {
		for (unsigned j = 0; j < cols; j++) {
			if (matrix[i][j] <= min)
			{
				min = matrix[i][j];
			}
		}
	}

	return min;
}

int getUpperSum(const int matrix[][MAX_SIZE], unsigned rows, unsigned cols) {
	int sum = 0;

	for (unsigned i = 0; i < rows; i++) {
		for (unsigned j = i; j < cols; j++) {
			sum += matrix[i][j];
		}
	}

	return sum;
}

int getLowerSum(const int matrix[][MAX_SIZE], unsigned rows, unsigned cols) {
	int sum = 0;

	for (unsigned i = 1; i < rows; i++) {
		for (unsigned j = 0; j < i; j++) {
			sum += matrix[i][j];
		}
	}

	return sum;
}

double getAverage(const int matrix[][MAX_SIZE], unsigned rows, unsigned cols) {
	int sum = 0;

	for (unsigned i = 0; i < rows; i++) {
		for (unsigned j = 0; j < cols; j++) {
			sum +=matrix[i][j];
		}
	}

	double average = (double)sum / (rows * cols);

	return average;
}

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];

	int rows, cols;
	cin >> rows >> cols;

	readMatrix(matrix, rows, cols);

	cout << getMaxElement(matrix, rows, cols) << " ";
	cout << getMinElement(matrix, rows, cols) << " ";
	cout << getAverage(matrix, rows, cols) << endl;

	printMatrix(matrix, rows, cols);

	cout << getUpperSum(matrix, rows, cols) << endl;
	cout << getLowerSum(matrix, rows, cols) << endl;
}