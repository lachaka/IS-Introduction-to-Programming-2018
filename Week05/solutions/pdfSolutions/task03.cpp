#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	char symbol = '\0';

	cin >> symbol;

	if (symbol > 64 && symbol < 91 || symbol > 96 && symbol < 123) {
		cout << "Letter" << endl;
	} else if (symbol > 47 && symbol < 58) {
		cout << "Number " << pow(symbol - '0', 2)<< endl;
	} else {
		cout << "Symbol" << endl;
	}

	return 0;
}