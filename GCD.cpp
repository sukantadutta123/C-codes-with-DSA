#include <iostream>

using namespace std;

// Function to compute GCD using iterative method
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "GCD (Iterative) of " << a << " and " << b << " is " << gcdIterative(a, b) << endl;

    return 0;
}
