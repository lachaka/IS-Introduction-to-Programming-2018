#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;

	cin >> num;

	int inSpaces = num - 4;

	for (int i = 0; i < num; i++) {
		cout << "*";
	}
	
	cout << endl;

	for (int i = 0; i < num / 2; i++) {
		for (int j = 0; j <= i; j++) {
			cout << " ";
		}
		cout << "*";

		for (int i = 0; i < inSpaces; i++) {
			cout << " ";
		}
		
		inSpaces -= 2;

		if (i + 1 != num / 2) {
			cout << "*";
		}
		cout << endl;
	}
	
	inSpaces += 4;

	for (int i = num / 2 - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << "*";

		for (int i = 0; i < inSpaces; i++) {
			cout << " ";
		}
		
		inSpaces += 2;

		if (i != 0) {
			cout << "*";
		}
		cout << endl;
	}
	
	for (int i = 0; i < num; i++) {
		cout << "*";
	}
	
	cout << endl;

	return 0;
}