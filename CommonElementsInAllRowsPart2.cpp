#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findCommonElements(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    // Use an unordered_set to store the common elements
    unordered_set<int> commonElements(matrix[0].begin(), matrix[0].end());
    
    // Traverse the matrix from the second row onwards
    for (int i = 1; i < rows; ++i) {
        unordered_set<int> rowElements;
        for (int j = 0; j < cols; ++j) {
            if (commonElements.find(matrix[i][j]) != commonElements.end()) {
                rowElements.insert(matrix[i][j]);
            }
        }
        commonElements = rowElements;  // Update common elements set
    }
    
    // Convert the unordered_set to vector
    vector<int> result(commonElements.begin(), commonElements.end());
    
    return result;
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
        for (int i = 0; i < commonElements.size(); ++i) {
            cout << commonElements[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements found in all rows." << endl;
    }
    
    return 0;
}



/*
Explanation of the Code
Initialization:

unordered_set<int> commonElements is initialized with the elements of the first row. This set will keep track of elements that are common across all rows processed so far.
Iterate through each row:

For each subsequent row, create a temporary set rowElements and insert only those elements that are found in the commonElements set.
After processing each row, update commonElements with rowElements.
Convert the set to a vector:

The common elements are collected into a vector for the final output.
Dry Run Example
Consider the following matrix:

Copy code
1  2  1  4  8
3  7  8  5  1
8  7  7  3  1
8  1  2  7  9
Step-by-Step Execution:

Initialization:

rows = 4
cols = 5
commonElements is initialized with elements from the first row: {1, 2, 4, 8}
Process Second Row:

rowElements is initialized as an empty set.
For each element in the second row:
3 is not in commonElements, so skip.
7 is not in commonElements, so skip.
8 is in commonElements, so add 8 to rowElements.
5 is not in commonElements, so skip.
1 is in commonElements, so add 1 to rowElements.
After processing the second row: rowElements = {1, 8}
Update commonElements with rowElements: commonElements = {1, 8}
Process Third Row:

rowElements is initialized as an empty set.
For each element in the third row:
8 is in commonElements, so add 8 to rowElements.
7 is not in commonElements, so skip.
7 is not in commonElements, so skip.
3 is not in commonElements, so skip.
1 is in commonElements, so add 1 to rowElements.
After processing the third row: rowElements = {1, 8}
Update commonElements with rowElements: commonElements = {8}
Process Fourth Row:

rowElements is initialized as an empty set.
For each element in the fourth row:
8 is in commonElements, so add 8 to rowElements.
1 is not in commonElements, so skip.
2 is not in commonElements, so skip.
7 is not in commonElements, so skip.
9 is not in commonElements, so skip.
After processing the fourth row: rowElements = {8}
Update commonElements with rowElements: commonElements = {8}
Result:

The commonElements set contains {8}, indicating that 8 is the only element that appears in all rows.
Convert the set to a vector and return.
Output:
Common elements in all rows are: 8
*/