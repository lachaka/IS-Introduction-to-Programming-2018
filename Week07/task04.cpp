#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int arr[] = {100, 10, 1, 1, 10, 100};
    bool palindrom = true;
 
    int length = sizeof(arr) / sizeof(int);
    
    for (int i = 0, j = length - 1; i < length / 2 && palindrom; i++, j--) {
        if (arr[i] != arr[j]) {
            palindrom = false;
        }
    }
 
    cout << boolalpha << palindrom << endl;

	return 0;
}