#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the HCF of an array of elements
int hcfOfArray(const vector<int>& arr) {
    int result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        result = gcd(result, arr[i]);
    }
    return result;
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

    // Calculate HCF of the array
    int result = hcfOfArray(elements);

    // Print the result
    cout << "HCF of the elements in the array is: " << result << endl;

    return 0;
}
