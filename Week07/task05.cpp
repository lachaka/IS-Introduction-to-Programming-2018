#include <iostream>
#include <cstring>

#define SIZE 26
#define INPUT_SIZE 1024

using namespace std;

void initLetterArr(char* letterArr);

int main(int argc, char const *argv[]) {
	char lowerCaseLetters[SIZE];

	char input[1024];

	initLetterArr(lowerCaseLetters);

	cin >> input;

	for (int i = 0; i < strlen(input); i++) {
		for (int j = 0; j < SIZE; j++) {
			if (input[i] == lowerCaseLetters[j]) {
				cout << input[i] << ":" << j << endl;
			}
		}
	}

	return 0;
}

void initLetterArr(char* letterArr) {
	for (int i = 'a'; i < 'a' + SIZE ; ++i) {
		letterArr[i - 'a'] = i;
	}
}