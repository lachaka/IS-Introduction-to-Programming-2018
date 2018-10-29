#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int sum = 0;
	int nums[7];

	for (int i = 0; i < 7; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	
	int tmp = sum;
	for (int i = 2; i < tmp; i++) {
		while (tmp % i == 0) {
			tmp /= i;
			cout << i << " ";
		}
	}	

	cout << endl;

	return 0;
}