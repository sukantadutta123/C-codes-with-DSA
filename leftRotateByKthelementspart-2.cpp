#include <bits/stdc++.h>
using namespace std;

void leftRotate(int a[], int n, int d) {
    // Reverse the first d elements
    reverse(a, a + d);
    // Reverse the remaining elements
    reverse(a + d, a + n);
    // Reverse the entire array
    reverse(a, a + n);
}

int main() {
    int n, d;
    cout << "Enter Array Size: -" << endl;
    cin >> n;

    int a[n]; // Correct array declaration
    cout << "Enter Array Elements: -" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Upto how many places you want to rotate: -" << endl;
    cin >> d;

    leftRotate(a, n, d); // Call the leftRotate function

    cout << "Rotated Array is: -" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
