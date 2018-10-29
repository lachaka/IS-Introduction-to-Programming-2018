#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	double avg = 0;
	int nums[7];
	int nearMid = 0;

	for (int i = 0; i < 7; i++) {
		cin >> nums[i];
		avg += nums[i];
	}
	avg /= 7;
	
	for (int i = 0; i < 7; i++) {
		if (nums[i] <= avg && nums[i] > nearMid) {
			nearMid = nums[i];
		} 
	}
	cout << nearMid << endl;

	return 0;
}