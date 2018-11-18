#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	int n = 0, number = 0;
    bool contains = false;
    int containsCount = 0;
    
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    cout << endl << "Number: " << endl;
    cin >> number;

    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            contains = true;
            containsCount++;
            cout << "Position: " << i << " ";
        }
    }
 
    if (contains) {
        cout << endl << "Count: " << containsCount << endl;
    }


	return 0;
}