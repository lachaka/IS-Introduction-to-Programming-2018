#include <iostream>
#include <cstring>

#define SIZE 128

using namespace std;

void concat(char* str1, char* str2);

int main(int argc, char const *argv[]) {
	char str1[SIZE];
	char str2[SIZE];

	cin.getline(str1, SIZE);
	cin.getline(str2, SIZE);

	concat(str1, str2);

	cout << str1 << endl;

	return 0;
}

void concat(char* str1, char* str2) {
	int str1Len = strlen(str1);

	for (int i = 0; i <= strlen(str2); i++) {
		str1[str1Len + i] = str2[i];
	}

}