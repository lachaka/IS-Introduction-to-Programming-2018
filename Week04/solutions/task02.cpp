#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int continent = 0;
	cin >> continent;
	switch (continent) {
		case 0:
			cout << "Antarctica" << endl;
			break;
		case 1:
			cout << "Africa" << endl;
			break;
		case 2:
			cout << "Asia" << endl;
			break;
		case 3:
			cout << "Europe" << endl;
			break;
		case 4:
			cout << "North America" << endl;
			break;
		case 5:
			cout << "Australia" << endl;
			break;
		case 6:
			cout << "South America" << endl;
			break;
	}

	return 0;
}