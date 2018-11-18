#include <iostream>
#include <cstring>

#define LETTERS_SIZE 26
#define INPUT_SIZE 1024

using namespace std;

int main(int argc, char const *argv[]) {
	int letters[LETTERS_SIZE] = {0};
	int count = 0;
	char input[INPUT_SIZE];

	cin >> input;

	for (int i = 0; i < strlen(input); i++) {
		count = 0;
		for (int j = 0; j < LETTERS_SIZE; j++) {
			if (input[i] == j + 'a') {
				letters[j]++;
			}
		}
	}

	for (int i = 0; i < LETTERS_SIZE; i++) {
		cout << (char)('a' + i) << ": " << letters[i] << endl;
	}

	return 0;
}