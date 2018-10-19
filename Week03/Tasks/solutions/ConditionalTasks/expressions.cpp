#include <iostream>
#include <math.h>

using namespace std;

void expressions();

int main() {
	
	expressions();

	return 0;
}

void expressions() {
    int type = 0;
    double num = 0.0;

    cin >> type >> num;

    switch (type) {
        case 1:
            cout << num << " - 5 = " << num - 5 << endl;
            break;
        case 2:
            cout << "sin(" << num << ") = " << sin(num) << endl;
            break;
        case 3:
            cout << "cos(" << num << ") = " << cos(num) << endl;
            break;
        case 4:
            cout << "exp(" << num << ") = " << exp(num) << endl;
			break;
        default:
            cerr << "Invalid type of expression!";
    }
}
