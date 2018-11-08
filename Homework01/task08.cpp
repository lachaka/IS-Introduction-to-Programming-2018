#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, tmp = 0;
	int digitCount = 0;
	bool palindrome = true;

	do {
		cin >> num;
	} while (num < 10 || num > 30000);

	tmp = num;

	while (tmp) {
		digitCount++;
		tmp /= 10;
	}

	int begin = pow(10, digitCount - 1);
	int end = 1;

	for (int i = 0; i < digitCount / 2; i++) {
		if ((num / end) % 10 != (num / begin) % 10) {
			palindrome = false;
			break;
		}

		end *= 10;
		begin /= 10;
	}

	if (palindrome) {
		cout << "Palindrome." << endl;
	} else {
		cout << "Not a palindrome." << endl;
	}


	return 0;
}