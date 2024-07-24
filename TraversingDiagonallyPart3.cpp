#include <iostream>
#include <vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int m = matrix.size();
    int n = matrix[0].size();
    
    int row = 0, col = 0;
    int direction = 1; // Direction flag: 1 for up-right, -1 for down-left
    
    while (row < m && col < n) {
        result.push_back(matrix[row][col]);
        
        // Moving up-right
        if (direction == 1) {
            if (row > 0 && col < n - 1) {
                row--;
                col++;
            } else {
                direction = -1; // Change direction
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
                direction = 1; // Change direction
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

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> diagonalOrder = findDiagonalOrder(matrix);

    cout << "\nDiagonal Order Traversal:" << endl;
    for (int i = 0; i < diagonalOrder.size(); ++i) {
        cout << diagonalOrder[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Example Matrix:
Copy code
1  2  3
4  5  6
7  8  9
Dry Run:
Initialization:

Input matrix dimensions: rows = 3, cols = 3.
Input matrix elements:
Copy code
1  2  3
4  5  6
7  8  9
Initialize result as an empty vector to store the diagonal order.
Initialize row = 0, col = 0, direction = 1 (starting with moving up-right).
First Iteration:

Current position: matrix[0][0] = 1
Append 1 to result: result = [1]
direction = 1 (up-right): Check boundaries.
Since row = 0 and col < 2, increment col to 1. Change direction to -1 (down-left).
Second Iteration:

Current position: matrix[0][1] = 2
Append 2 to result: result = [1, 2]
direction = -1 (down-left): Move diagonally down-left.
Decrement col to 0, increment row to 1.
Third Iteration:

Current position: matrix[1][0] = 4
Append 4 to result: result = [1, 2, 4]
direction = -1 (down-left): Check boundaries.
Since col = 0 and row < 2, increment row to 2. Change direction to 1 (up-right).
Fourth Iteration:

Current position: matrix[2][0] = 7
Append 7 to result: result = [1, 2, 4, 7]
direction = 1 (up-right): Move diagonally up-right.
Decrement row to 1, increment col to 1.
Fifth Iteration:

Current position: matrix[1][1] = 5
Append 5 to result: result = [1, 2, 4, 7, 5]
direction = 1 (up-right): Move diagonally up-right.
Decrement row to 0, increment col to 2.
Sixth Iteration:

Current position: matrix[0][2] = 3
Append 3 to result: result = [1, 2, 4, 7, 5, 3]
direction = 1 (up-right): Check boundaries.
Since row = 0 and col = 2, increment row to 1. Change direction to -1 (down-left).
Seventh Iteration:

Current position: matrix[1][2] = 6
Append 6 to result: result = [1, 2, 4, 7, 5, 3, 6]
direction = -1 (down-left): Move diagonally down-left.
Decrement col to 1, increment row to 2.
Eighth Iteration:

Current position: matrix[2][1] = 8
Append 8 to result: result = [1, 2, 4, 7, 5, 3, 6, 8]
direction = -1 (down-left): Move diagonally down-left.
Decrement col to 0, increment row to 3.
Ninth Iteration:

Current position: matrix[2][2] = 9
Append 9 to result: result = [1, 2, 4, 7, 5, 3, 6, 8, 9]
direction = -1 (down-left): Check boundaries.
Since col = 0 and row = 2, increment col to 3. Change direction to 1 (up-right).
Termination:

The loop terminates because col = 3 which is out of bounds.
Final Result:
The elements in diagonal order are: 1 2 4 7 5 3 6 8 9

Detailed Explanation of Each Line:
Initialization:

result is an empty vector.
m and n store the number of rows and columns respectively.
row and col are initialized to 0.
direction is initialized to 1 (moving up-right).
Loop Execution:

The while loop continues as long as row < m and col < n.
Inside the loop, the current element matrix[row][col] is appended to result.
Depending on the value of direction, the code checks if the next position is within bounds.
If moving up-right (direction = 1):
If the next position is within bounds, decrement row and increment col.
If the next position is out of bounds, switch direction to -1 and adjust row or col.
If moving down-left (direction = -1):
If the next position is within bounds, increment row and decrement col.
If the next position is out of bounds, switch direction to 1 and adjust row or col.
*/