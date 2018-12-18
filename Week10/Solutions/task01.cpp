#include <iostream>

#define SIZE 1024

using namespace std;

int symbolCount(char* str);
void changeSymbol(char* str, char symbol, char replaceSymbol);
void removeSymbol(char* str, char symbol);

int main(int argc, char const *argv[]) {
	char str[SIZE];

	cin >> str;

	int count = symbolCount(str);

	cout << count << endl;

	changeSymbol(str, 'a', 'b');

	cout << str << endl;

	removeSymbol(str, 'b');

	cout << str << endl;

	return 0;
}

int symbolCount(char* str) {
	int count = 0;
	int i = 0;

	while (str[i++] != '\0') {
		count++;
	}

	return count;
}

void changeSymbol(char* str, char symbol, char replaceSymbol) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == symbol) {
			str[i] = replaceSymbol;
		}
	}
}

void removeSymbol(char* str, char symbol) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == symbol) {
			for (int j = i; str[j] != '\0' ; j++) {
				str[j] = str[j + 1];
			}
		}
	}
}