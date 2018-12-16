#include <iostream>

#define SIZE 256

using namespace std;

void initMatrix(int matrix[][SIZE], int rows, int cols);
bool isEven(int number);
int evenCount(int* arr, int arrSize);
int oddConunt(int* arr, int arrSize);
void output(int matrix[][SIZE], int rows, int cols);
void transposedMatrix(int matrix[][SIZE], int rows, int cols, int transpMatrix[][SIZE]);
void outputMatrix(int matrix[][SIZE], int rows, int cols);

int main(int argc, char const *argv[]) {
	int matrix[SIZE][SIZE];
	int rows = 0, cols = 0;

	cin >> rows >> cols;

	initMatrix(matrix, rows, cols);

	outputMatrix(matrix, rows, cols);

	cout << "Rows: " << endl;
	output(matrix, rows, cols);

	transposedMatrix(matrix, rows, cols, matrix);
	cout << "Cols: " << endl;
	output(matrix, cols, rows);

	return 0;
}

void initMatrix(int matrix[][SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
}

bool isEven(int number) {
	return number % 2 == 0;
}

void output(int matrix[][SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		cout << " -> Even: " << evenCount(matrix[i], cols);
		cout << " -> Odd: " << oddConunt(matrix[i], cols);
		cout << endl;
	}
}

int evenCount(int* arr, int arrSize) {
	int evenCount = 0;

	for (int i = 0; i < arrSize; i++) {
		if (arr[i] % 2 == 0) {
			evenCount++;
		}
	}

	return evenCount;
}

int oddConunt(int* arr, int arrSize) {
	return arrSize - evenCount(arr, arrSize);
}

void transposedMatrix(int matrix[][SIZE], int rows, int cols, int transpMatrix[][SIZE]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transpMatrix[j][i] = matrix[i][j];
		}
	}
}

void outputMatrix(int matrix[][SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}