#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size(); // size of the array.
    
    int start = 0, end = 0;
    int sum = 0;
    int len = 0;

    while (end < n) {
        // Add the current element to the sum.
        sum += a[end];

        // If the sum exceeds k, move the start pointer to the right.
        while (sum > k && start <= end) {
            sum -= a[start];
            start++;
        }

        // If the current sum equals k, update the length.
        if (sum == k) {
            len = max(len, end - start + 1);
        }

        // Move the end pointer to the right.
        end++;
    }

    return len;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the target sum value: ";
    cin >> k;

    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray with sum " << k << " is: " << len << "\n";
    return 0;
}
