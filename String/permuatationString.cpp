#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printPermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;
    } else {
        for (int i = left; i <= right; ++i) {
            swap(str[left], str[i]);
            printPermutations(str, left + 1, right);
            swap(str[left], str[i]); // Backtrack
        }
    }
}

int main() {
    string str = "abc";
    printPermutations(str, 0, str.length() - 1);
    return 0;
}
