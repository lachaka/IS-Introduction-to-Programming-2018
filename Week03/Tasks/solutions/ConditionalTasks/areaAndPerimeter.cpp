#include <iostream>
#include <math.h>

#define PI 3.14

using namespace std;

void areaAndPerimeter();
double triangleArea(double a, double b, double c);
double trianglePerim(double a, double b, double c);
double squareArea(double a);
double squarePerim(double a);
double circleArea(double radius);
double circlePerim(double radius);
double trapezArea(double a, double b, double h);
double trapezPerim(double a, double b, double c, double d);

int main() {
    areaAndPerimeter();

    return 0;
}

void areaAndPerimeter() {
    int type = 0;
    double a = 0, b = 0, c = 0, d = 0, h = 0, radius = 0;
    cin >> type;
    switch (type) {
        case 1:
           cin >> a >> b >> c;
           cout << "Triangle area: " << triangleArea(a, b, c) << endl;
           cout << "Triangle perimeter: " << trianglePerim(a, b, c) << endl;
           break;

        case 2:
            cin >> a;
            cout << "Square area: " <<  squareArea(a) << endl;
            cout << "Square perimeter: " << squarePerim(a) << endl;
            break;

        case 3:
            cin >> radius;
            cout << "Circle area: " << circleArea(radius) << endl;
            cout << "Circle perimeter: " << circlePerim(radius) << endl;
            break;
        case 4:
            cin >> a >> b >> c >> d >> h;
            cout << "Trapez area: " << trapezArea(a, b, h) << endl;
            cout << "Trapez perimeter: " << trapezPerim(a, b, c ,d) << endl;
            break;
        default:
            cerr << "Invalid figure!" << endl;

    }
}

double triangleArea(double a, double b, double c) {
    double semiper = 0;
    double area = 0.0;

    semiper = (a + b + c) / 2;
    area = sqrt(semiper * (semiper - a) * (semiper - b) * (semiper - c));
    return area;
}

double trianglePerim(double a, double b, double c) {
    return a + b + c;
}

double squareArea(double a) {
    return a * a;
}

double squarePerim(double a) {
    return 4 * a;
}

double circleArea(double radius) {
    return PI * radius * radius;
}

double circlePerim(double radius) {
    return 2 * PI * radius;
}

double trapezArea(double a, double b, double h) {
    return (a + b) * h / 2;
}

double trapezPerim(double a, double b, double c, double d) {
    return a + b + c + d;
}
