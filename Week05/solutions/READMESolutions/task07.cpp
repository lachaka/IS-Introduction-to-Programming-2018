#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;
	int sum = 0;

	do {
		cin >> num;
	} while (num < 10 || num > 100);

	if (num % 2 == 1) {
		num--;
	}

	sum = ((2 + num) * num) / 4;

	cout << sum << endl;

	return 0;
}