#include <iostream>
#include <vector>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array on the basis of pivot
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to implement Quick Sort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print an array
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Given array is: ";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    printArray(arr);
    return 0;
}



/*
Explanation:
User Input:

The user is prompted to enter the number of elements in the array.
The elements of the array are read from the user.
Swap Function:

The swap function swaps two elements.
Partition Function:

The partition function partitions the array around the pivot.
The pivot is chosen to be the last element.
Elements smaller than or equal to the pivot are moved to the left.
Elements greater than the pivot are moved to the right.
Quick Sort Function:

The quickSort function recursively sorts the subarrays before and after the partition.
Printing the Array:

The function printArray is used to print the array elements.
Main Function:

The main function handles user input, calls quickSort, and prints the sorted array.
Dry Run Example with User Input [5, 4, 10, 1, 6, 2]:
Initial Call:
quickSort(arr, 0, 5).
First Partition (Pivot: 2):
Array: [5, 4, 10, 1, 6, 2].
After partition: [1, 2, 10, 5, 6, 4] (Pivot index: 1).
Recursive Calls:
quickSort(arr, 0, 0) and quickSort(arr, 2, 5).
Second Partition (Pivot: 4):
Array: [1, 2, 10, 5, 6, 4].
After partition: [1, 2, 4, 5, 6, 10] (Pivot index: 2).
Recursive Calls:
quickSort(arr, 2, 1) and quickSort(arr, 3, 5).
Third Partition (Pivot: 10):
Array: [1, 2, 4, 5, 6, 10].
After partition: [1, 2, 4, 5, 6, 10] (Pivot index: 5).
Recursive Calls:
quickSort(arr, 3, 4) and quickSort(arr, 6, 5).
Fourth Partition (Pivot: 6):
Array: [1, 2, 4, 5, 6, 10].
After partition: [1, 2, 4, 5, 6, 10] (Pivot index: 4).
Recursive Calls:
quickSort(arr, 3, 3) and quickSort(arr, 5, 4).
Final Sorted Array: [1, 2, 4, 5, 6, 10].
*/