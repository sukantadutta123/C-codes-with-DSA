#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



//  Explanation:
// Function Signature:

// void bubbleSort(int arr[], int n): This function takes an array of integers and its size as arguments and sorts the array in place.
// Outer Loop:

// for (int i = 0; i < n-1; i++): This loop iterates n-1 times. Each iteration ensures that the largest element in the unsorted portion is moved to its correct position.
// Inner Loop:

// for (int j = 0; j < n-i-1; j++): This loop iterates over the unsorted portion of the array, comparing adjacent elements and swapping them if they are in the wrong order.
// Swapping Elements:

// if (arr[j] > arr[j+1]): If the current element is greater than the next element, they are swapped.
// Dry Run Example:
// Consider the array: [5, 3, 8, 4, 2]

// Initial Array: [5, 3, 8, 4, 2]

// First Pass:

// Compare 5 and 3: Swap => [3, 5, 8, 4, 2]
// Compare 5 and 8: No Swap => [3, 5, 8, 4, 2]
// Compare 8 and 4: Swap => [3, 5, 4, 8, 2]
// Compare 8 and 2: Swap => [3, 5, 4, 2, 8]
// Second Pass:

// Compare 3 and 5: No Swap => [3, 5, 4, 2, 8]
// Compare 5 and 4: Swap => [3, 4, 5, 2, 8]
// Compare 5 and 2: Swap => [3, 4, 2, 5, 8]
// Third Pass:

// Compare 3 and 4: No Swap => [3, 4, 2, 5, 8]
// Compare 4 and 2: Swap => [3, 2, 4, 5, 8]
// Fourth Pass:

// Compare 3 and 2: Swap => [2, 3, 4, 5, 8]
// Final Sorted Array: [2, 3, 4, 5, 8]

// Explanation of Dry Run:
// First Pass: The largest element 8 moves to its correct position at the end.
// Second Pass: The next largest element 5 moves to its correct position.
// Third Pass: The element 4 moves to its correct position.
// Fourth Pass: The smallest element 2 moves to its correct position at the start.
// After these passes, the array is sorted. The outer loop runs n-1 times, and in each pass, the largest unsorted element "bubbles up" to its correct position, hence the name "Bubble Sort".