#include <iostream> 

using namespace std;

int main(int argc, char const *argv[]) {
	int sum = 0, num = 0;

	while (sum < 100) {
		cin >> num;
		if (num <= 30) {
			sum += num;
		}
	}

	cout << sum << endl;

	return 0;
}