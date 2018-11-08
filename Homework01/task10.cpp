#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, sum = 0;
	double avg = 0;
	int numCount = -1;

	do {
		sum += num;
		numCount++;
		cin >> num;
	} while (num >= 1);
	
	if (numCount) {
		avg = sum / (double)numCount;
	}
	cout << "Count: " << numCount << ", Sum: " << sum << ", Avg: " << avg << endl;

	return 0;
}