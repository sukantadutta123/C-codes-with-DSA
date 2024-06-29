#include <iostream>
#include <vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int m = matrix.size();
    int n = matrix[0].size();
    int totalDiagonals = m + n - 1; // Total number of diagonals
    
    for (int d = 0; d < totalDiagonals; ++d) {
        if (d % 2 == 0) { // Moving upwards
            int row = min(d, m - 1);
            int col = d - row;
            while (row >= 0 && col < n) {
                result.push_back(matrix[row][col]);
                --row;
                ++col;
            }
        } else { // Moving downwards
            int col = min(d, n - 1);
            int row = d - col;
            while (col >= 0 && row < m) {
                result.push_back(matrix[row][col]);
                ++row;
                --col;
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


Explanation:
Initialization:

findDiagonalOrder function initializes an empty vector result to store the elements in diagonal order.
Checks if the input matrix is empty. If so, returns an empty result vector.
m and n store the number of rows and columns in the matrix, respectively.
totalDiagonals calculates the total number of diagonals in the matrix (m + n - 1).
Diagonal Traversal Logic:

Iterates through each diagonal d from 0 to totalDiagonals - 1.
For each diagonal:
If d is even (d % 2 == 0), traverse upwards:
Starts at the minimum row row = min(d, m - 1) and column col = d - row.
Moves diagonally upwards (--row, ++col) until either row or column index goes out of bounds.
If d is odd (d % 2 != 0), traverse downwards:
Starts at the minimum column col = min(d, n - 1) and row row = d - col.
Moves diagonally downwards (++row, --col) until either row or column index goes out of bounds.
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

Diagonal 0 (Upwards): (0, 0) -> (1, 0) -> (0, 1) -> (2, 0) -> (1, 1) -> (0, 2)
Diagonal 1 (Downwards): (2, 1) -> (1, 2) -> (2, 2)
Diagonal Order Traversal:

Resulting sequence: 1 2 4 7 5 3 6 8 9
This implementation efficiently traverses the matrix diagonally without the need for direction flags, simply by adjusting row and column indices based on the parity of the diagonal index d. This approach reduces complexity and makes the traversal logic clearer.







*/