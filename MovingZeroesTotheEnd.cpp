#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    // Temporary array to store non-zero elements
    vector<int> temp(n);
    int j = 0; // Index for temp array

    // Copy non-zero elements from the original array to the temp array
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp[j] = a[i];
            j++;
        }
    }

    // Number of non-zero elements
    int nz = j;

    // Copy elements from temp back to the original array
    // Fill first nz fields of the original array
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    // Fill the rest of the original array with zeros
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }
    
    return a;
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

    vector<int> ans = moveZeros(n, a);
    cout << "Array without zeros: -" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';

    return 0;
}
