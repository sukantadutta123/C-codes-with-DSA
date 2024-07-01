#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


// Explanation:
// Function Signature:

// void insertionSort(int arr[], int n): This function takes an array of integers and its size as arguments and sorts the array in place.
// Outer Loop:

// for (int i = 1; i < n; i++): This loop iterates from the second element to the last element. The first element is considered sorted.
// Key Element:

// int key = arr[i];: The current element to be inserted into the sorted portion of the array.
// Inner Loop:

// while (j >= 0 && arr[j] > key): This loop iterates over the sorted portion of the array, moving elements that are greater than the key to one position ahead of their current position.
// Insert Key Element:

// arr[j + 1] = key;: Place the key element in its correct position in the sorted portion of the array.
// Dry Run Example:
// Consider the array: [5, 3, 8, 4, 2]

// Initial Array: [5, 3, 8, 4, 2]

// First Pass (i = 1):

// Key = 3
// Compare 5 and 3: Move 5 to the right => [5, 5, 8, 4, 2]
// Insert 3 in its correct position => [3, 5, 8, 4, 2]
// Second Pass (i = 2):

// Key = 8
// Compare 5 and 8: No move needed
// Insert 8 in its correct position => [3, 5, 8, 4, 2]
// Third Pass (i = 3):

// Key = 4
// Compare 8 and 4: Move 8 to the right => [3, 5, 8, 8, 2]
// Compare 5 and 4: Move 5 to the right => [3, 5, 5, 8, 2]
// Insert 4 in its correct position => [3, 4, 5, 8, 2]
// Fourth Pass (i = 4):

// Key = 2
// Compare 8 and 2: Move 8 to the right => [3, 4, 5, 8, 8]
// Compare 5 and 2: Move 5 to the right => [3, 4, 5, 5, 8]
// Compare 4 and 2: Move 4 to the right => [3, 4, 4, 5, 8]
// Compare 3 and 2: Move 3 to the right => [3, 3, 4, 5, 8]
// Insert 2 in its correct position => [2, 3, 4, 5, 8]
// Final Sorted Array: [2, 3, 4, 5, 8]

// Explanation of Dry Run:
// First Pass: The element 3 is inserted in its correct position in the sorted portion [5].
// Second Pass: The element 8 is already in the correct position.
// Third Pass: The element 4 is inserted in its correct position in the sorted portion [3, 5, 8].
// Fourth Pass: The element 2 is inserted in its correct position in the sorted portion [3, 4, 5, 8].
// After these passes, the array is sorted. The key idea is that each iteration picks an element from the unsorted portion and places it in its correct position in the sorted portion.






