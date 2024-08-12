#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numberOfDigits = 0;

    // Calculate the number of digits in the number
    while (originalNum > 0) {
        originalNum /= 10;
        numberOfDigits++;
    }

    originalNum = num;

    // Calculate the sum of each digit raised to the power of numberOfDigits
    while (originalNum > 0) {
        int digit = originalNum % 10;
        sum += pow(digit, numberOfDigits);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
