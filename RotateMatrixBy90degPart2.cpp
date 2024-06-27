#include <iostream>
#include <vector>
using namespace std;

void rotateMatrix90Degrees(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter the size of the matrix (N x N): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original matrix:" << endl;
    printMatrix(matrix);

    rotateMatrix90Degrees(matrix);

    cout << "Matrix after 90 degrees rotation:" << endl;
    printMatrix(matrix);

    return 0;
}




/*
Detailed Explanation
Input Matrix Size and Elements:

The user inputs the size n for an N x N matrix and then inputs the elements of the matrix.
Transpose the Matrix:

Iterate through the matrix using two nested loops.
For each pair of indices (i, j) where i < j, swap the elements matrix[i][j] and matrix[j][i].
This converts rows into columns.
Reverse Each Row:

Iterate through each row of the transposed matrix.
Reverse the elements in each row by swapping elements from the start of the row with the end of the row.
Example Dry Run
Consider the matrix:

Copy code
1  2  3
4  5  6
7  8  9
Step-by-Step Transformation:

Transpose the Matrix:
Initial matrix:

Copy code
1  2  3
4  5  6
7  8  9
Transpose process:

Swap matrix[0][1] with matrix[1][0] => 2 and 4 are swapped.
Swap matrix[0][2] with matrix[2][0] => 3 and 7 are swapped.
Swap matrix[1][2] with matrix[2][1] => 6 and 8 are swapped.
Transposed matrix:

Copy code
1  4  7
2  5  8
3  6  9
Reverse Each Row:
Reverse row 0: 1 4 7 becomes 7 4 1.
Reverse row 1: 2 5 8 becomes 8 5 2.
Reverse row 2: 3 6 9 becomes 9 6 3.
Final matrix after 90 degrees rotation:

Copy code
7  4  1
8  5  2
9  6  3
Output:
yaml
Copy code
Original matrix:
1 2 3 
4 5 6 
7 8 9 

Matrix after 90 degrees rotation:
7 4 1 
8 5 2 
9 6 3 
*/