#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int k = 0;
    int digit0 = 0, digit1 = 0, digit2 = 0;
    cin >> k;

    for (int i = 100; i < 1000; i++) {
        digit0 = i % 10;
        digit1 = (i / 10) % 10;
        digit2 = i / 100;

        if (digit0 + digit1 + digit2 == k) {
            cout << i << endl;
        }
    }

    return 0;
}