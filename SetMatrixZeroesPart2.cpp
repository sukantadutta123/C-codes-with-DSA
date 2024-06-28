#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    unordered_set<int> rowsToZero;
    unordered_set<int> colsToZero;
    
    // Traverse the matrix to find which rows and columns need to be zeroed
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                rowsToZero.insert(i);
                colsToZero.insert(j);
            }
        }
    }
    
    // Zero out rows
    for (int i : rowsToZero) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = 0;
        }
    }
    
    // Zero out columns
    for (int j : colsToZero) {
        for (int i = 0; i < m; ++i) {
            matrix[i][j] = 0;
        }
    }
}

// Utility function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:" << endl;
    printMatrix(matrix);

    return 0;
}



/*
Explanation of the Different Approach:
Using Sets for Tracking: Instead of modifying the matrix in place during the first pass, this approach uses two sets (rowsToZero and colsToZero) to keep track of which rows and columns should be zeroed out.

Identifying Zero Locations: The first pass through the matrix identifies all the positions (i, j) where the element is zero. For each zero found at matrix[i][j], we add i to rowsToZero and j to colsToZero.

Zeroing Rows and Columns: After identifying all positions to be zeroed, we make a second pass through the matrix to set all elements in the rows listed in rowsToZero and columns listed in colsToZero to zero.

Space Complexity: This approach uses O(m + n) additional space for the two sets rowsToZero and colsToZero, where m is the number of rows and n is the number of columns. This is more space-efficient compared to using additional rows and columns in the matrix itself.

Time Complexity: The time complexity remains O(m * n) as we need to traverse the matrix twice—once to identify zeroes and once to zero out rows and columns.

This alternative approach provides a clear separation between identifying zero locations and modifying the matrix, leveraging sets for efficient tracking and modification without modifying the matrix in place during the first traversal.
*/




/*
Example Matrix:
Consider the following 3x4 matrix:

plaintext
Copy code
1  1  1  1
1  0  1  1
1  1  1  1
Step-by-Step Execution:
Step 1: Initialization
Input Matrix:

plaintext
Copy code
1  1  1  1
1  0  1  1
1  1  1  1
Initialize Sets:

rowsToZero: To track rows that need to be zeroed.
colsToZero: To track columns that need to be zeroed.
Initially, both sets are empty.
Step 2: Identify Zero Positions
Traverse through the matrix to identify positions (i, j) where the element is zero.
During this traversal, we identify that matrix[1][1] (which is 0) needs its entire row and column zeroed.
Step 3: Update Sets
After identifying zero positions:
rowsToZero will contain {1} (since row 1 has a zero).
colsToZero will contain {1} (since column 1 has a zero).
Step 4: Zero Out Rows and Columns
Traverse through the matrix again.
For each row i in rowsToZero and each column j in colsToZero, set matrix[i][j] to zero.
Step 5: Final Matrix
Modified Matrix:
plaintext
Copy code
1  0  1  1
0  0  0  0
1  0  1  1
Explanation:
Initialization:

Sets rowsToZero and colsToZero are initialized.
Example matrix is prepared.
Identify Zero Positions:

First traversal identifies positions (1, 1) where matrix[1][1] is zero.
Update Sets:

After identifying zero positions, update rowsToZero and colsToZero accordingly.
Zero Out Rows and Columns:

Traverse through the matrix again.
For each row index in rowsToZero and column index in colsToZero, set corresponding matrix elements to zero.
Final Matrix:

The resulting matrix has rows and columns zeroed out as per the identified positions.
Summary:
This approach effectively separates identification of zero positions from the modification of the matrix, using sets to track which rows and columns need to be zeroed. It ensures that each element is processed exactly twice—once for identification and once for modification—resulting in an efficient O(m * n) time complexity, where m is the number of rows and n is the number of columns in the matrix.







*/