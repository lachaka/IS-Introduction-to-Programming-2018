#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	long long nFact = 1;
	int num = 0;
	
	cin >> num;

	for (int i = 1; i <= num; i++) {
		nFact *= i;
	}

	cout << nFact << endl;

	return 0;
}