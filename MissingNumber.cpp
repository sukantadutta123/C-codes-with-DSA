#include<bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + 1 != a[i + 1]) {
            return a[i] + 1;
        }
    }
    // In case the missing number is the last one in the range
    return a[n - 1] + 1;
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

    int missingNumber = MissingNumber(a, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
