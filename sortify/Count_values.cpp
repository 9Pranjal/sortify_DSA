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

    int pos = 0, neg = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
    }

    cout << "Positive numbers count: " << pos << endl;
    cout << "Negative numbers count: " << neg << endl;

    return 0;
}
