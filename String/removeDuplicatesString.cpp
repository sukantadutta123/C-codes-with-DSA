#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(const string& str) {
    string result;
    
    for (int i = 0; i < str.length(); ++i) {
        bool isDuplicate = false;

        // Check if the current character is a duplicate
        for (int j = 0; j < result.length(); ++j) {
            if (str[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If it's not a duplicate, add it to the result
        if (!isDuplicate) {
            result += str[i];
        }
    }

    return result;
}

int main() {
    string input;

    // Get user input
    cout << "Enter a string: ";
    getline(cin, input);

    // Remove duplicates
    string output = removeDuplicates(input);

    // Display the result
    cout << "String after removing duplicates: " << output << endl;

    return 0;
}
