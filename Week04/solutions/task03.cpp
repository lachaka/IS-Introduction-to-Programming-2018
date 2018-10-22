#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int day = 0;

	cin >> day;

	switch (day) {
		case 0:
			cout << "Monday" << endl;
			break;
		case 1:
			cout << "Tuesday" << endl;
			break;
		case 2:
			cout << "Wednesday" << endl;
			break;
		case 3:
			cout << "Thursday" << endl;
			break;
		case 4:
			cout << "Friday" << endl;
			break;
		case 5:
			cout << "Saturday" << endl;
			break;
		case 6:
			cout << "Sunday" << endl;
			break;
	}

	if (day > 4) {
		cout << "Weekend" << endl;
	} else {
		cout << "Not a Weekend :(" << endl;
	}

	return 0;
}