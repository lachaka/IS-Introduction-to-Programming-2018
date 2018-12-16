#include <iostream>

#define SIZE 256

using namespace std;

void initArray(double* arr, int arrSize);
int averageElemPos(double* arr, int arrSize);
double average(double a, double b);

int main(int argc, char const *argv[]) {
	double arr[SIZE];
	int arrSize = 0;

	cin >> arrSize;

	initArray(arr, arrSize);

	cout << averageElemPos(arr, arrSize) << endl; 

	return 0;
}

void initArray(double* arr, int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		cin >> arr[i];
	}
}

int averageElemPos(double* arr, int arrSize) {
	for (int i = arrSize - 1; i >= 0; i--) {
		if (i + 1 == arrSize) {
			if (arr[i] == arr[i - 1]) {
				return i;
			}
		} else if (i == 0) {
			if (arr[i] == arr[i + 1]) {
				return i;
			}
		} else {
			if (average(arr[i - 1], arr[i + 1]) == arr[i]) {
				return i;
			}
		}
	}
	return -1;
}

double average(double a, double b) {
	return (a + b) / 2;
}