#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int> &a, int n, int e) {
    for (int i = 0; i < n; i++) {
        if (a[i] == e) {
            return i; // Return the index where the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int n, e;
    cout << "Enter Array size: -" << endl;
    cin >> n;
    vector<int> a(n);
    cout << "Enter Array Elements: -" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter Element You want to Search: -" << endl;
    cin >> e;

    int result = LinearSearch(a, n, e);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
