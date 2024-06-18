#include <bits/stdc++.h>
using namespace std;

int singleOccurrence(vector<int> a, int n) {
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == num) {
                count++;
            }
        }
        if (count == 1) {
            return num;
        }
    }
    // Return -1 if no such element is found (optional improvement for robustness)
    return -1;
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

    int result = singleOccurrence(a, n);
    if (result != -1) {
        cout << "The element that occurs only once is: " << result << endl;
    } else {
        cout << "No element occurs exactly once in the array." << endl;
    }

    return 0;
}
