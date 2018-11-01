#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int firstDigit = 0, secDigit = 0, thirdDigit = 0;
	int num = 0, sum = 0;

	cin >> num;

	for (int i = 100; i < 1000; i++) {
		firstDigit = i / 100;
		secDigit = (i / 10) % 10;
		thirdDigit = i % 10;

		sum = firstDigit + secDigit + thirdDigit;

		if (sum == num && sum >= 2 && sum <= 27) {
			cout << i << endl;
		}	
	}
	
	return 0;
}