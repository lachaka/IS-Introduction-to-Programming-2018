#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	double avg = 0;
	int nums[7];

	for (int i = 0; i < 7; i++) {
		cin >> nums[i];
		avg += nums[i];
	}
	avg /= 7;
	cout << avg << endl;

	return 0;
}