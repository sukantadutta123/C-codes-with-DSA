#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

// Function to find the maximum product of any two elements in an array
int maxProduct(const vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return -1;
    }

    // Sort the array
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    // Maximum product can be either from the two largest positive numbers
    // or from the two smallest (most negative) numbers
    int maxProd1 = sortedArr[n-1] * sortedArr[n-2];
    int maxProd2 = sortedArr[0] * sortedArr[1];

    return max(maxProd1, maxProd2);
}

int main() {
    // Input the size of the array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input the elements of the array
    vector<int> elements(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    // Find the maximum product of any two elements in the array
    int result = maxProduct(elements);

    // Print the result
    if (result != -1) {
        cout << "Maximum product of any two elements in the array is: " << result << endl;
    }

    return 0;
}
