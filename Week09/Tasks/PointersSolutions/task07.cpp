#include <iostream>

#define SIZE 256

using namespace std;

bool removeNumber(int* arr, int& arrSize, int numToRemove);
void initArr(int* arr, int arrSize);

int main(int argc, char const *argv[]) {
	int arr[SIZE];
	int arrSize = 0;
	int numToRemove = 0;

	cin >> arrSize;

	initArr(arr, arrSize);

	cin >> numToRemove;

	cout << boolalpha << removeNumber(arr, arrSize, numToRemove) << endl;

	return 0;
}

void initArr(int* arr, int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		cin >> arr[i];
	}
}

bool removeNumber(int* arr, int& arrSize, int numToRemove) {
	int i = 0, j = 0;

	for (; i < arrSize; i++) {
		if (arr[i] == numToRemove) {
			continue;
		}
		arr[j++] = arr[i];
	}

	arrSize = j;  

	return i != j;
}