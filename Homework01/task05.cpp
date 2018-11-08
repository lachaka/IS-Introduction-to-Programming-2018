#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int n = 0, m = 0;
	int sum = 0, numCount = 0;
	bool prime = true;

	cin >> n >> m;

	for (int i = n; i <= m; i++) {
		sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		
		if (sum != 1 && sum != i) {
			prime = true;
			for (int j = 2; j < sum; j++) {
				if (sum % j == 0) {
					prime = false;
					break;
				}
			}

			if (prime) {
				numCount++;
			}
		}
	}

	cout << numCount << endl;

	return 0;
}