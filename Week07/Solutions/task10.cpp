#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int size = 4;
    int arr[size][size] = {{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}};

    for (int i = 0; i < size / 2; i++) {
        for (int j = i; j < size - 1 - i; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[size - 1 - j][i]; 
            arr[size - 1 - j][i] = arr[size - 1 - i][size - 1 - j];
            arr[size - 1 - i][size - 1 - j] = arr[j][size - 1 - i];
            arr[j][size - 1 - i] = temp;
        }    
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}