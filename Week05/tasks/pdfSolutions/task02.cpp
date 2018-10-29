#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;

	cin >> num;

	switch (num % 2) {
		case 0:
			cout << "Even" << endl;
			break;
		case 1:
			cout << "Odd" << endl;
			switch (num) {
				case 5:
				case 7:
				case 11:
				case 13:
				case 17:
				case 19:
					cout << "Prime" << endl;
					break;
				default:
					cout << "Not prime" << endl;
			}
	}

	return 0;
}