#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, tmp = 0;
	int digitCount = 0;
	int sum = 0;

	cin >> num;
	tmp = num;

	while (tmp) {
		tmp /= 10; 
		digitCount++;
	}
	
	tmp = num;

	while (tmp) {
		sum += pow(tmp % 10, digitCount);
		tmp /= 10;
	}

	if (num == sum) {
		cout << num << " is narcissistic!" << endl;
	} else {
		cout << num << " is not narcissistic!" << endl;
	}

	return 0;
}