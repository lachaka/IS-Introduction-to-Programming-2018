#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;
	int sum = 0;

	do {
		cin >> num;
	} while (num < 10 || num > 99);

	for (int i = 10; i <= num; i++) {
		sum += 	i % 10 + i / 10;
	}

	cout << sum << endl;

	return 0;
}