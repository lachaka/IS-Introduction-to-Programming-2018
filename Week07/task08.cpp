#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int n = 0;

	cin >> n;

	int arr[n][n];

	for (int i = 0; i < n * n; i++) {
		cin >> arr[i % n][i / n];
	}

	cout << endl;
	
	for (int i = 0; i < n; ++i) {
		cout << arr[i][i] << " ";
	}
	
	cout << endl;
	
	for (int i = 0, k = n - 1; i < n; i++, k--) {
		cout << arr[k][i] << " ";
	}
	
	cout << endl;

	return 0;
}