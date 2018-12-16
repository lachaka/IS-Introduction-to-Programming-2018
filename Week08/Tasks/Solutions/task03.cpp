#include <iostream>

#define SIZE 256

using namespace std;

void constructMatrix(int matrix[][SIZE], int rows);
void outputMatrix(int matrix[][SIZE], int rows);

int main(int argc, char const *argv[]) {
	int rows = 0;
	int matrix[SIZE][SIZE];

	cin >> rows;

	constructMatrix(matrix, rows);
	outputMatrix(matrix, rows);

	return 0;
}

void constructMatrix(int matrix[][SIZE], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (i == j) {
				matrix[i][j] = i;
			} else if (i > j && (i - j) > 0) {
				matrix[i][j] = i * j;
			} else {
				matrix[i][j] = j - i;
			}
		}
	}
}

void outputMatrix(int matrix[][SIZE], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}