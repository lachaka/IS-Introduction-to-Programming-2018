#include <iostream>

using namespace std;

bool divisibility();

int main() {

	cout << boolalpha << divisibility() << endl;

	return 0;
}

bool divisibility() {
    int num = 0;
    int nFactorial = 1;

    cin >> num;

    for (int i = 1; i <= 10; i++) {
        nFactorial *= i;
    }

    return num % nFactorial == 0;
}
