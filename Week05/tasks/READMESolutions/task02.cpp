#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int max = 0;
	int nums[7];

	for (int i = 0; i < 7; i++) {
		cin >> nums[i];
		if (nums[i] > max) {
			max = nums[i];
		}
	}

	cout << max << endl;

	return 0;
}