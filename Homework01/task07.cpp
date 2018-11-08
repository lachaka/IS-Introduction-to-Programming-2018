#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int month = 0;
	int year = 0;
	
	cin >> month >> year;

	bool isLeap = ((year % 4 == 0) && !(year % 100 == 0)) 
			|| (year % 400 == 0);

	switch (month) {
		case 1:
			cout << "January - 31" << endl;
			break;
		case 2:
			cout << "February - ";
			if (isLeap) {
				cout << "29" << endl;
			} else {
				cout << "28" << endl;
			}
			break;
		case 3:
			cout << "March - 31" << endl;
			break;
		case 4:
        	cout << "April - 30" << endl;
        	break;
	    case 5:
	        cout << "May - 31" << endl;
	        break;
	    case 6:
	        cout << "June - 30" << endl;
	        break;
	    case 7:
	        cout << "July - 31" << endl;
	        break;
	    case 8:
	        cout << "August - 31" << endl;
	        break;
	    case 9:
	        cout << "September - 30" << endl;
	        break;
	    case 10:
	        cout << "October - 31" << endl;
	        break;
	    case 11:
	        cout << "November - 30" << endl;
	        break;
	    case 12:
	        cout << "December - 31" << endl;
			break;
		default:
			cerr << "Invalid month!" << endl;
	}

	return 0;
}