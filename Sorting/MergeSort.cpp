#include <iostream>
#include <vector>
using namespace std;

// Function to merge two subarrays of arr[]
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    // Create temporary arrays
    vector<int> leftArr(n1), rightArr(n2);

    // Copy data to temporary arrays leftArr[] and rightArr[]
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[], if there are any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[], if there are any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Function to implement Merge Sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Calculate the mid point

        // Sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
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

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    printArray(arr);
    return 0;
}




/*


Explanation:
User Input:

The user is prompted to enter the number of elements in the array.
The elements of the array are read from the user.
Merge Function:

The function merge merges two sorted subarrays into a single sorted array.
Merge Sort Function:

The function mergeSort recursively splits the array into two halves and sorts them.
Printing the Array:

The function printArray is used to print the array elements.
Main Function:

The main function handles user input, calls mergeSort, and prints the sorted array.
Dry Run Example with User Input [5, 4, 10, 1, 6, 2]:
Initial Split:
Split into [5, 4, 10] and [1, 6, 2].
Further Split:
[5, 4, 10] splits into [5] and [4, 10].
[4, 10] splits into [4] and [10].
[1, 6, 2] splits into [1] and [6, 2].
[6, 2] splits into [6] and [2].
Merging:
Merge [4] and [10] to get [4, 10].
Merge [5] and [4, 10] to get [4, 5, 10].
Merge [6] and [2] to get [2, 6].
Merge [1] and [2, 6] to get [1, 2, 6].
Merge [4, 5, 10] and [1, 2, 6] to get the final sorted array [1, 2, 4, 5, 6, 10].
Final Sorted Array: [1, 2, 4, 5, 6, 10]


*/