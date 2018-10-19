#include <iostream>
#include <math.h>

using namespace std;

void operators();

int main() {
	operators();

	return 0;
}

void operators() {
    char symbol = ' ';
    double a = 0, b = 0;

    cin >> symbol >> a >> b;

    switch (symbol) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '%':
            cout << (int)a % (int)b << endl;
            break;
        default:
            cerr << "Invalid operator!";
    }
}
