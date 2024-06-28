#include <iostream>
#include <vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int m = matrix.size();
    int n = matrix[0].size();
    
    int row = 0, col = 0;
    bool goingUp = true; // Direction flag
    
    while (row < m && col < n) {
        result.push_back(matrix[row][col]);
        
        // Moving up-right
        if (goingUp) {
            if (row > 0 && col < n - 1) {
                row--;
                col++;
            } else {
                goingUp = false;
                if (col < n - 1) {
                    col++;
                } else {
                    row++;
                }
            }
        }
        // Moving down-left
        else {
            if (col > 0 && row < m - 1) {
                row++;
                col--;
            } else {
                goingUp = true;
                if (row < m - 1) {
                    row++;
                } else {
                    col++;
                }
            }
        }
    }
    
    return result;
}

// Utility function to print vector elements
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    vector<int> diagonalOrder = findDiagonalOrder(matrix);

    cout << "\nDiagonal Order Traversal:" << endl;
    printVector(diagonalOrder);

    return 0;
}



/*
Initialization:

findDiagonalOrder function initializes an empty vector result to store the elements in diagonal order.
Checks if the input matrix is empty. If so, returns an empty result vector.
Variables:

m and n store the number of rows and columns in the matrix, respectively.
row and col initialize at (0, 0) as starting positions.
goingUp is a boolean flag indicating the current traversal direction.
Traversal:

While row is within bounds (row < m) and col is within bounds (col < n):
Append matrix[row][col] to result.
Depending on the direction (goingUp):
If moving up-right:
Check boundaries to decide whether to increment row and col or switch direction.
If moving down-left:
Check boundaries to decide whether to increment row and col or switch direction.
Direction Control:

goingUp alternates between true and false to switch between moving up-right and down-left.
Output:

main function initializes a sample matrix.
Calls findDiagonalOrder to retrieve the diagonal traversal order.
Prints the original matrix and the diagonal order traversal result.
Dry Run with Example:
Consider the input matrix:

plaintext
Copy code
1  2  3
4  5  6
7  8  9
Traversal Path:

Start at (0, 0) -> 1
Move up-right to (0, 1) -> 2
Move down-left to (1, 0) -> 4
Move down-left to (2, 0) -> 7
Move up-right to (1, 1) -> 5
Move up-right to (0, 2) -> 3
Move up-right to (1, 2) -> 6
Move down-left to (2, 1) -> 8
Move down-left to (2, 2) -> 9
Diagonal Order Traversal:

Resulting sequence: 1 2 4 7 5 3 6 8 9
This implementation ensures efficient traversal of the matrix in O(m * n) time complexity, where m is the number of rows and n is the number of columns, by directly manipulating row and column indices based on the zigzag traversal pattern.
*/