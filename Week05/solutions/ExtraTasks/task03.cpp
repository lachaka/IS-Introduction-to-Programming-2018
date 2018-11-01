#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int num = 0, tmp = 0;
    int r = 0;
    int exp = 1;
 
    do {
        cin >> num;
    } while (num < 0 || num > 1000);
 
    for (int i = 1; num > 0; i *= 10) {
        tmp = tmp + i * (num % 2);
        num /= 2;
    }
 
    cout << tmp << endl;
 
    return 0;
}