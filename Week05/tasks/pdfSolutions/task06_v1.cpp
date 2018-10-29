#include <iostream> 
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, temp = 0, digits = 0;
	long sum = 0;
	cin >> num;
	temp = num;

	for (; temp > 0; digits++, temp /= 10);
	
	if (digits > 3) {
		for (int i = 1; i <= num; i++) {
			sum += pow(i, 2);
		}
		cout << sum << endl;
	}


	return 0;
}