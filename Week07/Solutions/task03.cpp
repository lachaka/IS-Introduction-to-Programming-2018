#include <iostream> 

#define SIZE 1024

using namespace std;

int main(int argc, char const *argv[]) {
	int n = 0, sum = 0;
    int maxMid = 0;
    double avg = 0;
    int k = 0, j = 0;
 
    int lowArr[SIZE], biggerArr[SIZE];
 
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
 
    avg = (double)sum / n;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] <= avg) {
            maxMid = max(arr[i], maxMid);
        }
    }
 
    cout << "Max num closer to avg: " << maxMid << endl;
 	
 	for (int i = 0; i < n; i++) {
        if (arr[i] < avg) {
            lowArr[j] = arr[i];
            j++;
        } else {
            biggerArr[k] = arr[i];
            k++;
        }
    }
    cout << "Lower than avg." << endl;
 
    for (int i = 0; i < j; i++) {
        cout << lowArr[i] << " ";
    }
 
    cout << endl << "Bigger than avg." << endl;
 
    for (int i = 0; i < k; i++) {
        cout << biggerArr[i] << " ";
    }
 
    cout << endl;


	return 0;
}