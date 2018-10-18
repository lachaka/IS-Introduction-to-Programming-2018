#include <iostream>

using namespace std;

void calendar();
void sortNumbers();
bool palindrom();
void thernometer();
void operators();

int main()
{
    calendar();
    sortNumbers();
    cout << (palindrom() ? "Yes" : "No") << endl;
    thernometer();

    return 0;
}

void calendar() {
    int month = 0;

    cin >> month;

    switch (month) {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    default:
        cout << "wtf" << endl;
    }

}

void sortNumbers() {
    double a = 0, b = 0, c = 0;

    double temp = 0;

    cin >> a >> b >> c;

    if ((float)a > (float)b) {
        temp = a;
        a = b;
        b = temp;
    }
    if ((float)b > (float)c) {
        temp = b;
        b = c;
        c = temp;
    }
    if ((float)a > (float)b) {
        temp = a;
        a = b;
        b = temp;
    }

    cout << a  << " "<< b << " " << c << endl;
}

bool palindrom() {
    int num = 0;
    cin >> num;
    int temp = num / 10000;
    if (num % 10 == temp) {
        temp = num / 1000;
        num /= 10;
        if (num % 10 == temp % 10) {
            return true;
        }
    }

    return false;
}

void thernometer() {
    cout << " What kind of conversion do you want to make? \n 1) Celsius to Fahrenheit \n 2) Fahrenheit to Celsius" << endl;
    int type = 0;
    cin >> type;
    double temperature = 0;

    if (type  == 1) {
        cout << "Temperature in Celsius: ";
        cin >> temperature;
        temperature = (temperature *  9)/5 + 32;
        cout << "Temperature in Fahrenheit: " << temperature << endl;
    } else {
        cout << "Temperature in Fahrenheit: ";
        cin >> temperature;

        temperature = temperature * 1.8 + 32;
        cout << "Temperature in Celsius: " << temperature;
    }
}
