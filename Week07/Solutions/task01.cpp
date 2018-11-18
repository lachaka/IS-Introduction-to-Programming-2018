#include <iostream>

#define SIZE 1024

using namespace std;

int main(int argc, char const *argv[]) {
 	int n = 0;
 	int arr[SIZE];

    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 	
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; ++i) {
    	if (arr[i] > maxVal) {
    		maxVal = arr[i];
    	}

    	if (arr[i] < minVal) {
    		minVal = arr[i];
    	}
    }

    cout << "Max: " << maxVal << endl;
    cout << "Min: " << minVal << endl;


	int secMinVal = 0;
	int secMaxVal = 0;

   
 	for (int i = 0; i < n; i++) {
 		for (int j = i + 1; j < n; j++) {
 			if (arr[i] < arr[j]) {
 				int temp = arr[i];
 				arr[i] = arr[j];
 				arr[j] = temp;
 			}
 		}
 	}

 	cout << endl;
 	minVal = arr[n - 1];
 	secMinVal = arr[n - 2];
 	
 	maxVal = arr[0];
 	secMaxVal = arr[1];

 	cout << "Min value: " << minVal << endl;
 	cout << "Second min value: " << secMinVal << endl;

 	cout << "Max value: " << maxVal << endl;
 	cout << "Second max value: " << secMaxVal << endl;
 	
	return 0;
}