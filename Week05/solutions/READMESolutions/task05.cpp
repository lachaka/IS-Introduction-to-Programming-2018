#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;

	do {
		cin >> num;
	} while (num < 10 || num > 200);

	for (int i = num; i > 0; i--) {
		if (i % 7 == 0) {
			cout << i << endl;
		}
	}

	return 0;
}