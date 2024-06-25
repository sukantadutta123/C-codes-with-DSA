#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findCommonElements(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    unordered_map<int, int> freqMap;
    
    // Initialize the frequency map with the first row
    for (int j = 0; j < cols; ++j) {
        freqMap[matrix[0][j]] = 1;
    }
    
    // Traverse the matrix from the second row onwards
    for (int i = 1; i < rows; ++i) {
        unordered_map<int, int> tempMap;
        for (int j = 0; j < cols; ++j) {
            // If element is present in freqMap and not yet counted for the current row
            if (freqMap[matrix[i][j]] == i) {
                tempMap[matrix[i][j]] = i + 1;
            }
        }
        // Update the freqMap with tempMap values for the current row
        for (const auto& elem : tempMap) {
            freqMap[elem.first] = elem.second;
        }
    }
    
    // Collect elements that appear in all rows
    vector<int> commonElements;
    for (const auto& elem : freqMap) {
        if (elem.second == rows) {
            commonElements.push_back(elem.first);
        }
    }
    
    return commonElements;
}

int main() {
    int rows, cols;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    vector<int> commonElements = findCommonElements(matrix);
    
    if (!commonElements.empty()) {
        cout << "Common elements in all rows are: ";
        for (int elem : commonElements) {
            cout << elem << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements found in all rows." << endl;
    }
    
    return 0;
}




/*
To find the common elements in all rows of a given matrix, we can use a hash map (or unordered map) to keep track of the frequency of elements across all rows. The algorithm involves two main steps:

Traverse each row and update the frequency of each element.
Identify elements that appear in all rows.
Explanation
Initialize Frequency Map with First Row:
Traverse the first row of the matrix and initialize a frequency map with each element marked with a count of 1.
Traverse the Rest of the Matrix:
For each subsequent row, create a temporary map to count elements that are present in the frequency map and have a count equal to the current row index. This ensures we only consider elements that have been seen in all previous rows.
Update Frequency Map:
Update the frequency map with the values from the temporary map, incrementing the count to indicate that these elements have been seen in the current row as well.
Identify Common Elements:
Traverse the frequency map to collect elements that have a count equal to the number of rows, indicating they are present in every row.
Dry Run Example
Consider the following matrix:

Copy code
1  2  1  4  8
3  7  8  5  1
8  7  7  3  1
8  1  2  7  9
Step-by-Step Execution:

Initialize Frequency Map with First Row:

yaml
Copy code
freqMap = {1: 1, 2: 1, 4: 1, 8: 1}
Process Second Row:

Temporary map after processing second row:
yaml
Copy code
tempMap = {1: 2, 8: 2}
Update freqMap:
yaml
Copy code
freqMap = {1: 2, 2: 1, 4: 1, 8: 2}
Process Third Row:

Temporary map after processing third row:
css
Copy code
tempMap = {8: 3}
Update freqMap:
yaml
Copy code
freqMap = {1: 2, 2: 1, 4: 1, 8: 3}
Process Fourth Row:

Temporary map after processing fourth row:
css
Copy code
tempMap = {8: 4}
Update freqMap:
yaml
Copy code
freqMap = {1: 2, 2: 1, 4: 1, 8: 4}
Identify Common Elements:

Only element 8 has a count of 4 (equal to number of rows).
Output:
sql
Copy code
Common elements in all rows are: 8
This code will correctly identify the common elements that appear in all rows of the matrix and is efficient with a complexity of O(rows * cols).
*/