#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to count prime numbers in an array
int countPrimes(const vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (isPrime(num)) {
            count++;
        }
    }
    return count;
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

    // Count the number of prime numbers in the array
    int primeCount = countPrimes(elements);

    // Print the result
    cout << "Number of prime numbers in the array is: " << primeCount << endl;

    return 0;
}
