#include <iostream>
 
#define SIZE 1024
 
using namespace std;
 
void initArr(int* arr, int size);
int evenCount(int* arr, int size);
bool isEven(int number);

int main() {
    int arrSize = 0;
    cin >> arrSize;
 
    int arr[SIZE];
 
    initArr(arr, arrSize);
 
    int countEven = evenCount(arr, arrSize);
    int oddCount = arrSize - countEven;
 
    cout << "Even -> " << countEven << endl;
    cout << "Odd -> " << oddCount << endl;
 
    return 0;
}
 
void initArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
 
bool isEven(int number) {
    return number % 2 == 0;
}

int evenCount(int* arr, int size) {
    int count = 0;
 
    for (int i = 0; i < size; i++) {
        if (isEven(arr[i])) {
            count++;
        }
    }
 
    return count;
}