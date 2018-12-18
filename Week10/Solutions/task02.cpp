#include <iostream>
#include <cstring>

#define SIZE 256

using namespace std;

bool palidrom(char* str);
bool isAlpha(char* str);
void reverseStr(char* str);

int main(int argc, char const *argv[]) {
	char str[SIZE];

	cin >> str;

	cout << isAlpha(str) << endl;
	reverseStr(str);

	cout << str << endl;
	
	return 0;
}

bool palidrom(char* str) {
	for (int i = 0, j = strlen(str) - 1; i < strlen(str)/ 2; i++, j--) {
		if (str[i] != str[j]) {
			return false;
		}
	}

	return true;
}

bool isAlpha(char* str) {
	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) {
			return false;
		} 
	}
	return true;
}

void reverseStr(char* str) {
	for (int i = 0, j = strlen(str) - 1; i < strlen(str) / 2; i++, j--) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}