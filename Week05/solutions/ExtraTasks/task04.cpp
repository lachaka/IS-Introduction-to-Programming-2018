#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int rows = 0;
	int prev = 1;

	cin >> rows;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows - i; j++) {
			cout << " ";
		}

		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				prev = 1;
			} else {
				prev = (prev * (i + 1 - j)) / j ;
			}

			cout << prev << " ";
		}
		cout << endl;
 	}

	return 0;
}