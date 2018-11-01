#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, sum = 0;
	do {
		cin >> num;
	} while (num < 3 || num > 102);

	sum = ((1 + num) * num) / 2;

	cout << sum << endl;


	return 0;
}