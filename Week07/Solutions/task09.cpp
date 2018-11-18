#include <iostream>

#define SIZE 4

using namespace std;

int main(int argc, char const *argv[]) {
	int arr[SIZE][SIZE] = {{1, 2, 3, 4},
							{5, 6, 7, 8},
							{9, 10, 11, 12},
							{13, 14, 15, 16}};
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			sum += arr[j][j];
		}
	}

	avg = (double)sum / (SIZE * SIZE);

	cout << "Sum: " << sum << endl;
	cout << "Agv: " << avg << endl;

	return 0;
}