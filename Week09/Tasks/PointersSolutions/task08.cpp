#include <iostream>

#define SIZE 256

using namespace std;

int* findBinaryNumber(int* arr, int arrSize, int num);
int convertToBinary(int number);
void initArr(int* arr, int arrSize);

int main(int argc, char const *argv[]) {
	int arr[SIZE];
	int arrSize = 0;
	int number = 0;

	cin >> arrSize;

	initArr(arr, arrSize);

	cin >> number;

	int* adr = findBinaryNumber(arr, arrSize, number);

	return 0;
}

void initArr(int* arr, int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		cin >> arr[i];
	}
}

int convertToBinary(int number) {
    int binary = 0;
 	int exp = 1;

    while (number) {
        binary += exp * (number % 2);
        number /= 2;
        exp *= 10;
    }
    return binary;
}

int* findBinaryNumber(int* arr, int arrSize, int number) {
	for (int i = 0; i < arrSize; i++) {
		if (number == convertToBinary(arr[i])) {
			return (arr + i);
		}
	}

	return nullptr;
}