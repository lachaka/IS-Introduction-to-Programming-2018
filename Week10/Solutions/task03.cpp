#include <iostream>
#include <cstring>

#define SIZE 128

using namespace std;

int convertToDigit(char* str);

int main(int argc, char const *argv[]) {
	char str[SIZE];

	cin >> str;

	int number = convertToDigit(str);

	cout << number << endl;

	return 0;
}

int convertToDigit(char* str) {
	int number = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] - '0' >= 10) {
			return -1;
		}

		number = number * 10 + (str[i] - '0');
	}

	return number;
}