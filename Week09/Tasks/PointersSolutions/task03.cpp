#include <iostream>

#define SIZE 256

using namespace std;

void mergeArrays(int* arr1, int sizeArr1, int* arr2, int suzeArr2, int* mergedArr);
void outputArr(int* arr, int size);

int main(int argc, char const *argv[]) {
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {-2, -1, 0, 1 , 4, 10, 20};

	int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
	int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

	int mergedArray[SIZE];
	int mergedArraySize = arr1Size + arr2Size;

	mergeArrays(arr1, arr1Size, arr2, arr2Size, mergedArray);
	outputArr(mergedArray, mergedArraySize);
	
	return 0;
}

void mergeArrays(int* arr1, int sizeArr1, int* arr2, int sizeArr2, int* mergedArr) {
	for (int i = 0, j = 0, k = 0; i < sizeArr1 + sizeArr2; i++) {
		if (arr1[j] <= arr2[k]) {
			mergedArr[i] = arr1[j++];
		} else {
			mergedArr[i] = arr2[k++];
		}
	}
}

void outputArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}