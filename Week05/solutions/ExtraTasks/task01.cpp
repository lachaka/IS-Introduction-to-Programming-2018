#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int rows = 0, num = 1;
    
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}
