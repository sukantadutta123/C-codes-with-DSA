#include<bits/stdc++.h>
using namespace std;

void deleteElement(int a[], int &n, int pos) {
    for (int i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--; // Decrease the size of the array
}

int main() {
    int n, pos;
    cout << "Enter size of the array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the position of the element to delete: " << endl;
    cin >> pos;

    if (pos > n || pos <= 0) {
        cout << "Invalid position!" << endl;
    } else {
        deleteElement(a, n, pos);
    }

    cout << "Updated array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
