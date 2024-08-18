#include <iostream>
#include <vector>

using namespace std;

// Function to count odd and even numbers in an array
void countOddEven(const vector<int>& arr, int& oddCount, int& evenCount) {
    oddCount = 0;
    evenCount = 0;
    for (int num : arr) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
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

    // Variables to store the count of odd and even numbers
    int oddCount, evenCount;

    // Count the number of odd and even numbers in the array
    countOddEven(elements, oddCount, evenCount);

    // Print the results
    cout << "Number of odd numbers in the array: " << oddCount << endl;
    cout << "Number of even numbers in the array: " << evenCount << endl;

    return 0;
}
