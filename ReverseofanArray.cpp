#include <bits/stdc++.h>
using namespace std;

// Function to reverse the array
void reverseArray(vector<int> &a, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}

int main() {
    int n;
    cout << "Enter Array Size: -" << endl;
    cin >> n;

    vector<int> a(n);
    cout << "Enter Array Elements: -" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Call the reverse function
    reverseArray(a, n);

    cout << "Array is: -" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
