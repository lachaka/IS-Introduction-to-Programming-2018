#include <iostream>
 
#define SIZE 1024
 
using namespace std;
 
void initArr(int* arr, int arrSize);
void outputArr(int* arr, int arrSize);
int convertToBinary(int number);
 
int main() {
    int arr[SIZE];
    int arrSize = 0;
 
    cin >> arrSize;
 
    initArr(arr, arrSize);
    outputArr(arr, arrSize);
 
    return 0;
}
 
void initArr(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
}
 
void outputArr(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " - " << convertToBinary(arr[i]) << endl;
    }
}
 
int convertToBinary(int number) {
    int binary = 0;
    int exp = 1;

    while (number) {
        binary += exp * (number % 2);
        number /= 2;
        exp *= 10;
    }
    
    return binary;
}