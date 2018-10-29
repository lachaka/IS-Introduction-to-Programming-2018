#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	float mark = 0;

	cin >> mark;

	switch ((int)round(mark)) {
		case 2:
			cout << "Weak";
			break;
		case 3:
			if (mark < 3) {
				cout << "Weak";
			} else {
				cout << "Acverage";
			}
			break;
		case 4:
			cout << "Good";
			break;
		case 5:
			cout << "Well done";
			break;
		case 6:
			cout << "Excellent";
			break;
		default:
			cout << "Invalid mark!";
			return 0;
	}
	cout << " (" << mark << ")" << endl; 
	return 0;
}