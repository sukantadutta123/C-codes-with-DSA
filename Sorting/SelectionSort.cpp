#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[minIndex], arr[i]);
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

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Explanation:
Function Signature:

void selectionSort(int arr[], int n): This function takes an array of integers and its size as arguments and sorts the array in place.
Outer Loop:

for (int i = 0; i < n - 1; i++): This loop iterates from the first element to the second last element. Each pass selects the smallest element from the unsorted part of the array and places it in the correct position.
Finding Minimum Element:

int minIndex = i;: Initialize the index of the minimum element to the current position.
for (int j = i + 1; j < n; j++): This inner loop iterates over the unsorted part of the array to find the index of the smallest element.
if (arr[j] < arr[minIndex]): Update minIndex if a smaller element is found.
Swap Elements:

swap(arr[minIndex], arr[i]);: Swap the found minimum element with the first element of the unsorted part.
Dry Run Example:
Consider the array: [64, 25, 12, 22, 11]

Initial Array: [64, 25, 12, 22, 11]

First Pass (i = 0):

Minimum element in [64, 25, 12, 22, 11] is 11
Swap 11 with 64
Array after first pass: [11, 25, 12, 22, 64]
Second Pass (i = 1):

Minimum element in [25, 12, 22, 64] is 12
Swap 12 with 25
Array after second pass: [11, 12, 25, 22, 64]
Third Pass (i = 2):

Minimum element in [25, 22, 64] is 22
Swap 22 with 25
Array after third pass: [11, 12, 22, 25, 64]
Fourth Pass (i = 3):

Minimum element in [25, 64] is 25
No swap needed
Array after fourth pass: [11, 12, 22, 25, 64]
Final Sorted Array: [11, 12, 22, 25, 64]

Explanation of Dry Run:
First Pass: The smallest element 11 is found and swapped with the first element 64.
Second Pass: The smallest element 12 is found and swapped with the second element 25.
Third Pass: The smallest element 22 is found and swapped with the third element 25.
Fourth Pass: The smallest element 25 is found, and no swap is needed as it is already in the correct position.
After these passes, the array is sorted. The key idea is that each iteration selects the smallest element from the unsorted part of the array and places it in the correct position.

*/




