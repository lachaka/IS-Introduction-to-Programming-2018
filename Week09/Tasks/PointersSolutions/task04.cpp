#include <iostream>

#define SIZE 256

using namespace std;

void transposedMatrix(int matrix[][SIZE], int rows, int cols, int transpMatrix[][SIZE]);
void outputMatrix(int matrix[][SIZE], int rows, int cols);
void initMatrix(int matrix[][SIZE], int rows, int cols);

int main(int argc, char const *argv[]) {
	int matrix[SIZE][SIZE];
	int rows = 0, cols = 0;
	int transpMatrix[SIZE][SIZE];

	cin >> rows >> cols;

	initMatrix(matrix, rows, cols);
	transposedMatrix(matrix, rows, cols, transpMatrix);
	outputMatrix(transpMatrix, cols, rows);

	return 0;
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

void initMatrix(int matrix[][SIZE], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> matrix[i][j];
		}
	}
}