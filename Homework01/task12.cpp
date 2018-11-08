#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int meters = 0, days = 0;
	int movement = 0;

	do {
		cin >> meters;
	} while (meters < 10 || meters > 101);
	
	while (true) {
		movement += 2;
		days++;

		if (movement >= meters) {
			break;
		}
		movement--;
	}

	cout << days << endl;

	return 0;
}