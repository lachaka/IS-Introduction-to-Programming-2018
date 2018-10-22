#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int num = 0;

	cin >> num;

	switch(num) {
		case 0:
			cout << "Spring" << endl;
			break;
		case 1:
			cout << "Summer" << endl;
			break;
		case 2:
			cout << "Autumn" << endl;
			break;
		case 3:
			cout << "Winter" << endl;
	}


	return 0;
}