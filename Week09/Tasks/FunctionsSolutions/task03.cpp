#include <iostream>
 
#define SIZE 1024
 
using namespace std;
 
void initArr(int* arr, int arrSize);
void outputArr(int* arr, int arrSize);
long nFact(long num);
 
int main() {
    int arr[SIZE];
    int arrSize = 0;
 
    cin >> arrSize;
 
    initArr(arr, arrSize);
    outputArr(arr, arrSize);
 
    return 0;
}
 
void initArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
 
void outputArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "! = " << nFact(arr[i]) << endl;
    }
 
}
 
long nFact(long num) {
    if (num == 1) {
        return 1;
    }
    return num * nFact(num - 1);
}