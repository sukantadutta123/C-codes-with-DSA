#include <iostream>
#include <cctype> // For isalpha and tolower functions

using namespace std;

int countVowels(const string& str) {
    int vowelCount = 0;
    for (char ch : str) {
        char lowerCh = tolower(ch); // Convert to lowercase
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    string input;
    
    // Get user input
    cout << "Enter a string: ";
    getline(cin, input);
    
    // Count vowels
    int result = countVowels(input);
    
    // Display the result
    cout << "Number of vowels: " << result << endl;
    
    return 0;
}
