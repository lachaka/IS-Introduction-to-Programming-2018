#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int len = 7;
	int nums[7] = {1, 2, 3, 4, 3, 2, 1};
	bool symmetric = true;
	for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
		if (nums[i] != nums[j]) {
			symmetric = false;
			break;
		}
	}

	cout << boolalpha << symmetric << endl;

	return 0;
}