#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the full line of text

    // Reverse the string
    string reversed = string(input.rbegin(), input.rend());

    // Print the reversed string
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
