#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &a, int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            a[j++] = a[i];
        }
    }
    a[j++] = a[n - 1];
    return j;
}

int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;
    vector<int> a(n);
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Remove duplicates
    int newSize = removeDuplicates(a, n);

    // Print the array with no duplicates
    cout << "Array without duplicates: " << endl;
    for (int i = 0; i < newSize; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
