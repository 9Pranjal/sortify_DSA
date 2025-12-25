#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Unique elements are: ";

    for(int i = 0; i < n; i++) {
        int flag = 0;

        for(int j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
