#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int money = 5;
	int menu = 0;
	int voucher = 0;

	while (menu != 3) {
		cout << "1 - check balance!" << endl;
		cout << "2 - insert money from voucher!" << endl;
		cout << "3 - exit" << endl;

		cin >> menu;
		
		switch (menu) {
			case 1:
				cout << "Balance: " << money << endl;
				break;

			case 2:
				cin >> voucher;	
				
				if (voucher == 555) {
					money += 10;
				}
				break;
		}
	}

	return 0;
}