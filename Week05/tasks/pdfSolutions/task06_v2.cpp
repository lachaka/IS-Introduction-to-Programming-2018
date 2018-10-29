#include <iostream> 
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0, temp = 0, digits = 0;

	cin >> num;
	temp = num;

	for (; temp > 0; digits++, temp /= 10);
	
	if (digits > 3) {
		for (int i = 0; i < num; i++) {
			if (i % 2 == 0) {
				cout << i << " ";
			}
		}
		cout << endl;
	}


	return 0;
}