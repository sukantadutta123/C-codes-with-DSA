#include<bits/stdc++.h>
using namespace std;

int MaximumOnes(vector<int> a, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            count++;
        }
    }
    return count;
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

    int result = MaximumOnes(a, n);
    cout << "The number of 1s in the array is: " << result << endl;

    return 0;
}
