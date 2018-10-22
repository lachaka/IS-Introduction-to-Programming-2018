#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;

	cin >> num;

	switch (num % 10) {
		case 2:
		case 3:
		case 4:
			cout << "Defender" << endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			cout << "Midfielder" << endl;
			break;
		default:
			if (num != 11 && num % 10 == 1) {
				cout << "Goalkeeper" << endl;
			} else {
				cout << "Forward" << endl;
			}
	}

	return 0;
}