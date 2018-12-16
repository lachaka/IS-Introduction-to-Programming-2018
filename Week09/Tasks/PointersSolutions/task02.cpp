#include <iostream>

#define SIZE 1024

using namespace std;

void reverse(int *arr, int size);
void initArr(int *arr, int size);
void outputArr(int *arr, int size);

int main(int argc, char const *argv[]) {
	int arr[SIZE];

	int size = 0;

	cin >> size;

	initArr(arr, size);
	reverse(arr, size);
	outputArr(arr, size);

	return 0;
}

void initArr(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void reverse(int *arr, int size) {
	for (int i = 0, j = size - 1; i < size / 2; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void outputArr(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}
