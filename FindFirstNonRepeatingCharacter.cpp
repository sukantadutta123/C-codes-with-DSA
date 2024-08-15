#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(const string& str) {
    unordered_map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }
    for (char c : str) {
        if (freq[c] == 1) {
            return c;
        }
    }
    return '\0'; // Return null character if no non-repeating character is found
}

int main() {
    string str = "swiss";
    char result = firstNonRepeatingChar(str);
    if (result != '\0') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}
