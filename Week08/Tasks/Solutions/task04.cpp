#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num);
bool isDoubledPrime(int num1, int num2);

int main(int argc, char const *argv[]) {
	int a = 0, b = 0;

	cin >> a >> b;

	cout << boolalpha << isDoubledPrime(a, b) << endl;

	return 0;
}

bool isPrime(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

bool isDoubledPrime(int num1, int num2) {
	return isPrime(num1) && isPrime(num2) && num2 == num1 + 2;
}