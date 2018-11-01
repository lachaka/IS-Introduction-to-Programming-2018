#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int firstDigit = 0, secDigit = 0, thirdDigit = 0;
	int numCount = 0;
	
	for (int i = 100; i < 1000; i++) {
		firstDigit = i / 100;
		secDigit = (i / 10) % 10;
		thirdDigit = i % 10;

		if (firstDigit != secDigit && firstDigit != thirdDigit 
			&& secDigit != thirdDigit) {
			numCount++;
			cout << i << endl;
		}	
	}
	cout << "Number count: " << numCount << endl;

	return 0;
}