#include <iostream>
 
#define SIZE 1024
 
using namespace std;
 
void printArr(int* arr, int size);
void initArr(int* arr, int size);
 
int main() {
    int arr[SIZE];
    int n = 0;
 
    cin >> n;
 
    initArr(arr, n);
    printArr(arr, n);
 
    return 0;
}
 
void initArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
 
void printArr(int* arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}