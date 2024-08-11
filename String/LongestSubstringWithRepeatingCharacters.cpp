#include <iostream>
#include <string>
using namespace std;

int longestSubstringWithoutRepeating(string s) {
    int maxLength = 0;

    for (int i = 0; i < s.length(); ++i) {
        bool seen[256] = { false }; // Assuming ASCII characters
        int currentLength = 0;

        for (int j = i; j < s.length(); ++j) {
            if (seen[s[j]]) {
                break;
            }
            seen[s[j]] = true;
            ++currentLength;
        }

        maxLength = max(maxLength, currentLength);
    }

    return maxLength;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Length of longest substring without repeating characters: " << longestSubstringWithoutRepeating(s) << endl;
    return 0;
}
