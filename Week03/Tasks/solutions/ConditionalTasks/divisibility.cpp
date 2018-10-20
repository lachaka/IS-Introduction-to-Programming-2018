#include <iostream>

using namespace std;


int main() {
   int num = 0;

    cin >> num;

	cout << (num % (10 * 9 * 4 * 7) == 0 ? "Yes" : "No") << endl;

	return 0;
}
