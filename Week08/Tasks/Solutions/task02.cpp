#include <iostream>
#include <cmath>

using namespace std;

double calculateH(double a, double b, int n);
double calculateFx(double x);
double calculateXi(double x, double h);
double calculateIntegral(double a, double b, int n);

int main(int argc, char const *argv[]) {
	cout << calculateIntegral(10, 11, 10) << endl;

	return 0;
}

double calculateH(double a, double b, int n) {
	return (b - a) / n;
}

double calculateFx(double x) {
	return pow(x, 3) - 5 * x;
}

double calculateXi(double x, double h) {
	return x + h;
}

double calculateIntegral(double a, double b, int n) {
	double xi = a, nextXi = 0;
	double result = 0;
	double h = calculateH(a, b, n);

	for (int i = 1; i < n; i++) {
		xi = calculateXi(xi , h);
		nextXi = calculateXi(xi, h);

		result += (h / 2) * (calculateFx(xi) + calculateFx(nextXi));
	}

	return result;
}