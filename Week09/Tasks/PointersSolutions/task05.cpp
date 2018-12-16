#include <iostream>
#include <cstring>

#define SIZE 256

using namespace std;

void removeVowelLetters(char* str);
bool isVowelLetter(char symbol);

int main(int argc, char const *argv[]) {
	char str[SIZE];

	cin >> str;

	removeVowelLetters(str);

	cout << str << endl;

	return 0;
}

void removeVowelLetters(char* str) {
	int j = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (isVowelLetter(str[i])) {
			continue;
		}
		str[j++] = str[i];
	}

	for (int i = j; i < strlen(str); i++) {
		str[i] = '\0';
	}
}

bool isVowelLetter(char symbol) {
	return symbol == 'a' || symbol == 'e' || symbol == 'o' 
			|| symbol == 'u' || symbol == 'i' || symbol == 'y';
}