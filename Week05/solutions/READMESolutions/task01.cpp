#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int sum = 0, num = 0;
	int i = 0;

	while (i < 5) {
		cin >> num;

		if (num >= 10 && num <= 5555) {
			sum += num;
			i++;
		}
	} 

	cout << sum << endl;

	return 0;
}