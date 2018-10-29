#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int sum = 0;
	int nums[7];

	for (int i = 0; i < 7; i++) {
		cin >> nums[i];
		sum += nums[i];
	}

	cout << sum << endl;

	return 0;
}