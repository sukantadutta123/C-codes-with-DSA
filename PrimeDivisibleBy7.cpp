#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Prompt user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Prompt user for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Vector to store the odd numbers divisible by 7
    vector<int> result;

    // Iterate through the array using a traditional for loop
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 7 == 0 && arr[i] % 2 != 0) {
            result.push_back(arr[i]);
        }
    }

    // Print the result
    cout << "Odd numbers divisible by 7 in the array are: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
