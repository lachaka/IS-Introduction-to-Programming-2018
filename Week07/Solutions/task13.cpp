#include <iostream>

#define SIZE 3

using namespace std;

int main(int argc, char const *argv[]) {
	int arr[SIZE][SIZE] = {{1,2,3},
							{5,6,7},
							{9,10,11}};
	
	int sumOver = 0;
	int sumUnder = 0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < i; j++) {
			sumUnder += arr[i][j];
		}
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			sumOver += arr[i][j];
		}
	}

	cout << "Sum under diagonal: " << sumUnder << endl;
	cout << "Sum over diagonal: " << sumOver << endl;

	return 0;
}