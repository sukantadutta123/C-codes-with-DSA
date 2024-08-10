#include <iostream>
#include <string>
using namespace std;

// Function to expand around center and find the longest palindrome
string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        --left;
        ++right;
    }
    return s.substr(left + 1, right - left - 1);
}

// Function to find the longest palindromic substring
string longestPalindrome(const string& s) {
    if (s.empty()) return "";
    string longest = "";
    for (int i = 0; i < s.length(); ++i) {
        // Odd length palindromes
        string p1 = expandAroundCenter(s, i, i);
        if (p1.length() > longest.length()) {
            longest = p1;
        }
        // Even length palindromes
        string p2 = expandAroundCenter(s, i, i + 1);
        if (p2.length() > longest.length()) {
            longest = p2;
        }
    }
    return longest;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = longestPalindrome(input);
    cout << "Longest palindromic substring: " << result << endl;

    return 0;
}
