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

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to calculate the LCM of an array of digits
int lcmOfArray(const std::vector<int>& arr) {
    int result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    // Input the size of the array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input the elements of the array
    vector<int> digits(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    // Calculate LCM of the array
    int result = lcmOfArray(digits);

    // Print the result
    cout << "LCM of the digits in the array is: " << result << std::endl;

    return 0;
}
