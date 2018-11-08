#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, numCount = 0, sum = 0;

	do {
		cin >> num;

		if (num > 9 && num < 100) {
			sum += num;
			numCount++;
		}
	} while (numCount != 5 && sum < 234);
	
	cout << numCount << ", " << sum << endl;

	return 0;
}