#include <iostream>
#include <vector>
using namespace std;

void spiralOrderTraversal(vector<vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return;
    
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; ++i) {
            cout << matrix[top][i] << " ";
        }
        top++;
        
        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; ++i) {
            cout << matrix[i][right] << " ";
        }
        right--;
        
        // Traverse from right to left along the bottom row, if any
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }
        
        // Traverse from bottom to top along the left column, if any
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
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

    cout << "Spiral order traversal of the matrix is:" << endl;
    spiralOrderTraversal(matrix);

    return 0;
}

/*
Explanation:
Input Matrix Dimensions:

The user inputs the number of rows and columns.
Input Matrix Elements:

The user inputs the elements of the matrix.
Spiral Order Traversal:

Initialize four boundary pointers: top, bottom, left, and right.
top starts at 0, bottom at the last row index, left at 0, and right at the last column index.
Use a while loop to continue the traversal as long as top <= bottom and left <= right.
Traversal Process:

Traverse from left to right along the top row, then increment top.
Traverse from top to bottom along the right column, then decrement right.
If there are remaining rows, traverse from right to left along the bottom row, then decrement bottom.
If there are remaining columns, traverse from bottom to top along the left column, then increment left.
Output:

Print the elements in spiral order.
Example Dry Run:
Consider the matrix:

Copy code
1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16
Steps:

Traverse top row: 1 2 3 4
Traverse right column: 8 12 16
Traverse bottom row: 15 14 13
Traverse left column: 9 5
Traverse next top row: 6 7
Traverse next right column: 11
Traverse next bottom row: 10
Output:

Copy code
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
This code will print the matrix in spiral order, starting from the top-left corner and moving inwards.
*/