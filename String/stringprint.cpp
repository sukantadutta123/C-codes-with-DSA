#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input; // Read a single word (up to whitespace)

    cout << "You entered: " << input << endl;

    return 0;
}
