#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int num = 0, sum = 1;
    cin >> num;
    
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    cout << num;
 
    if (sum == num) {
        cout << " is a perfect number!" << endl;
    } else {
        cout << " is not a perfect number!" << endl;
    }
 
    return 0;
}