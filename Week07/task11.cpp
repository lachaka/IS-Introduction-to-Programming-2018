#include <iostream>

#define SIZE 3

using namespace std;

int main(int argc, char const *argv[]) {
	int arr[SIZE][SIZE] = {{1,2,3},
							{5,6,7},
							{9,10,11}};

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] *= arr[i][j];
		}
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}