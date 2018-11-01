#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, sum = 0, maxNum = 0;
	int i = 0;

	do {
		cin >> num;
	} while (num < 3 || num > 10);
	
	while (i < num) {
		int tmp = 0;
		cin >> tmp;

		if (tmp >= 10 && tmp < 10000) {
			sum += tmp;
			maxNum = max(maxNum, tmp);
			i++;
		}
	}

	cout << "Sum: " << sum << endl << "Max: " << maxNum << endl;

	return 0;
}