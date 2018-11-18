#include <iostream>

#define SIZE 3
#define MIN_INT 
using namespace std;

int main(int argc, char const *argv[]) {
	int arr[SIZE][SIZE] = {{1,200,3},
							{5,6,700},
							{9,10,11}};

	int rowSum = 0;
	int colSum = 0;
	int maxRowSum = 0;
	int maxColSum = 0;
	int maxRowSumIndex = 0;
	int maxColSumIndex = 0;

	for (int i = 0; i < SIZE; i++) {
		rowSum = 0;
		colSum = 0;
		
		for (int j = 0; j < SIZE; j++) {
			rowSum += arr[i][j];
			colSum += arr[j][i];
			if (colSum > maxColSum) {
				maxColSum = colSum;
				maxColSumIndex = i;
			}
		}

		if (rowSum > maxRowSum) {
			maxRowSum = rowSum;
			maxRowSumIndex = i;
		}
	}

	cout << "Largest sum row: " << ++maxRowSumIndex << endl;
	cout << "Largest sum column: " << ++maxColSumIndex << endl;

	return 0;
}