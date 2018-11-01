#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int firstDigit = 0, lastDigits = 0;
	
	for (int i = 100; i < 1000; i++) {
		firstDigit = i / 100;
		lastDigits = i % 100;

		if ((int)pow(firstDigit, 2) == lastDigits) {
			cout << i << endl;
		}
	}


	return 0;
}