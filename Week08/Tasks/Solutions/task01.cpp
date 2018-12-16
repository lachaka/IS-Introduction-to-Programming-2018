#include <iostream>

using namespace std;

double abs(double num);
double pow(double base, int exp);
double min(double first, double second);
double max(double first, double second);
double minOf3(double first, double second, double third);
double maxOf3(double first, double second, double third);
bool isAlpha(char symbol);
bool isDigit(char symbol);

int main(int argc, char const *argv[]) {

	return 0;
}

double abs(double num) {
	if (num < 0) {
		num *= -1;
	}

	return num;
}

double pow(double base, int exp) {
	double result = 1;
	for (int i = 0; i < abs(exp); ++i) {
		result *= base;
	}

	return exp > 0 ? result : (1 / result);
}

double min(double first, double second) {
	if (first < second) {
		return first;
	}
	
	return second;
}

double max(double first, double second) {
	if (first < second) {
		return second;
	}
	
	return first;
}

double minOf3(double first, double second, double third) {
	return min(min(first, second), third);
}

double maxOf3(double first, double second, double third) {
	return max(max(first, second), third);
}

bool isAlpha(char symbol) {
	if ((symbol >= 'a' && symbol <= 'z') 
		|| (symbol >= 'A' && symbol <= 'Z')) {
		return true;
	}

	return false;
}

bool isDigit(char symbol) {
	if (symbol >= '0' && symbol <= '9') {
		return true;
	}

	return false;
}