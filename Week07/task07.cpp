#include <iostream>

#define MAX_INT 0x7FFFFFFF

using namespace std;

int main(int argc, char const *argv[]) {
	int arr[6][5] = {{48, 72, 13, 14, 15},
					{21, 22, 53, 24, 75},
					{31, 57, 33, 34, 35},
					{41, 95, 43, 44, 45},
					{59, 52, 53, 54, 55},
					{61, 69, 63, 64, 65}};

	int min = arr[0][0];
	int max = arr[0][0];

	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (min > arr[i][j]) {
				min = arr[i][j];
			}

			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	return 0;
}