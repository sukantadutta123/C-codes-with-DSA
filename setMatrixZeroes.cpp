#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    // Variables to track if the first row and column need to be zeroed
    bool firstRowZero = false;
    bool firstColZero = false;
    
    // Check if the first row needs to be zeroed
    for (int j = 0; j < n; ++j) {
        if (matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }
    
    // Check if the first column needs to be zeroed
    for (int i = 0; i < m; ++i) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }
    
    // Use first row and first column as flags to mark zeroing needed
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    // Zero out rows based on first column flags
    for (int i = 1; i < m; ++i) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < n; ++j) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Zero out columns based on first row flags
    for (int j = 1; j < n; ++j) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < m; ++i) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Zero out first row if needed
    if (firstRowZero) {
        for (int j = 0; j < n; ++j) {
            matrix[0][j] = 0;
        }
    }
    
    // Zero out first column if needed
    if (firstColZero) {
        for (int i = 0; i < m; ++i) {
            matrix[i][0] = 0;
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
Explanation:
Initial Check for Zeroes: We first iterate through the matrix to determine if the first row (firstRowZero) and first column (firstColZero) need to be zeroed out based on the presence of zeros in them.

Flagging Zeroes: We use the first row and first column of the matrix itself to store whether a particular row or column needs to be zeroed out. If matrix[i][j] is 0, we set matrix[i][0] and matrix[0][j] to 0.

Zeroing Rows and Columns: After flagging, we iterate through the matrix again, using the flags in the first row and column to zero out the respective rows and columns.

Final Adjustment: Finally, based on the firstRowZero and firstColZero flags, we zero out the entire first row and first column if necessary.

This approach ensures that we achieve the required modification of the matrix in O(m * n) time complexity and O(1) extra space, making it efficient for large matrices used in interviews and real-world scenarios.
*/