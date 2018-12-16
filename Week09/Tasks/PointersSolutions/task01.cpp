#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main(int argc, char const *argv[]) {
	int a = 0, b = 0;

	cin >> a >> b;
	cout << "Before swap: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap(a, b);

	cout << "After swap: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
