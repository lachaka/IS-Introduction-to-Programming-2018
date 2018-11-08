#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;
	int digitCount = 0;

	do {
		cin >> num;
	} while (num < 10 || num > 30000);
	
	while (num > 0) {
		digitCount++;
		num /= 10;
	}

	cout << digitCount << endl;

	return 0;
}