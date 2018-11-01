#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int side = 0;
	char sym = '\0';

	cin >> side >> sym;

	for (int i = 0; i < side; i++) {
		cout << "*";
	}

	cout << endl;
	
	for (int i = 1; i < side - 1; i++) {
		cout << "*";
		for (int i = 0; i < side - 2; i++) {
			cout << sym;
		}
		cout << "*" << endl;
	}

	for (int i = 0; i < side; i++) {
		cout << "*";
	}

	cout << endl;
 	
 	return 0;
}