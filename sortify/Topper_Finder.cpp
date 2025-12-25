#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];

    // Find largest
    for(int i = 1; i < n; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
    }

    int secondLargest = -1;

    // Find second largest
    for(int i = 0; i < n; i++) {
        if(a[i] != largest && a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }

    cout << "Largest element: " << largest << endl;

    if(secondLargest == -1)
        cout << "Second largest element not found";
    else
        cout << "Second largest element: " << secondLargest;

    return 0;
}
