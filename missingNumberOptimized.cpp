#include <iostream>
#include <vector>
using namespace std;

int MissingNumber(vector<int> &a) {
    int n = a.size();
    
    // Find the minimum and maximum values in the array
    int min_val = a[0];
    int max_val = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] < min_val) {
            min_val = a[i];
        }
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    
    // Calculate the expected sum of the sequence from min_val to max_val
    int expected_sum = 0;
    for (int i = min_val; i <= max_val; ++i) {
        expected_sum += i;
    }
    
    // Calculate the actual sum of the array
    int actual_sum = 0;
    for (int i = 0; i < n; ++i) {
        actual_sum += a[i];
    }
    
    // The missing number is the difference between the expected sum and actual sum
    int missing_number = expected_sum - actual_sum;
    return missing_number;
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

    int missingNumber = MissingNumber(a);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
