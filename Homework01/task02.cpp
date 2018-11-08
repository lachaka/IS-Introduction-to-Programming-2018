#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int months = 0;
	double loan = 0, rate = 0, total = 0;

	cout << "Value for loan: ";
	cin >> loan;

	cout << "Number of months: ";
	cin >> months;

	cout << "Interest rate: ";
	cin >> rate;

	total = loan * (1 + (months * rate) / 100);

	cout << "Monthly interest rate: " << rate / months << endl;
	cout << "q = " << 1 + (months * rate) / 100 << endl;
	cout << "Monthly payment: " << total / months << endl;
	cout << "The total amount to be returned: " << total << endl;

	return 0;
}