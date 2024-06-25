#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

void rotateMatrix90Degrees(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Reverse each row
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
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



/*Explanation:
Input Matrix Size:

The user inputs the size n for an N x N matrix.
Input Matrix Elements:

The user inputs the elements of the matrix.
Transpose the Matrix:

Iterate through the matrix, swapping the element at position (i, j) with the element at position (j, i).
Reverse Each Row:

Iterate through each row and reverse the elements in that row.
Print Matrix:

The printMatrix function is used to print the matrix before and after the rotation.
Example Dry Run:
Consider the matrix:

Copy code
1 2 3
4 5 6
7 8 9
Steps:

Transpose:

Swap elements to get:
Copy code
1 4 7
2 5 8
3 6 9
Reverse Each Row:

Reverse each row to get:
Copy code
7 4 1
8 5 2
9 6 3
Output:

yaml
Copy code
Matrix after 90 degrees rotation:
7 4 1
8 5 2
9 6 3
*/

// Another Explaination

/*
Concept of Matrix Rotation
When you rotate a matrix by 90 degrees clockwise, you are transforming the matrix such that the first column of the original matrix becomes the first row of the new matrix (reversed), the second column becomes the second row, and so on.

Example
Consider the following 4x4 matrix:

Original Matrix:

Copy code
1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16
Step-by-Step Transformation
Transpose the Matrix:

In a transposition, you swap rows with columns. This means the element at position (i, j) in the original matrix will move to position (j, i) in the transposed matrix.
Transposed Matrix:

Copy code
1  5  9 13
2  6 10 14
3  7 11 15
4  8 12 16
Reverse Each Row:

After transposing, reverse each row to get the final rotated matrix.
Matrix after Reversing Each Row:

Copy code
13  9  5  1
14 10  6  2
15 11  7  3
16 12  8  4
Detailed Explanation
Transpose the Matrix
Transposing a matrix means converting its rows into columns. Here's how the elements are rearranged during the transposition:

Element at (0, 0) (1) remains at (0, 0).
Element at (0, 1) (2) moves to (1, 0).
Element at (0, 2) (3) moves to (2, 0).
Element at (0, 3) (4) moves to (3, 0).
Element at (1, 0) (5) moves to (0, 1).
And so on...
Transposed Matrix:

Copy code
1  5  9 13
2  6 10 14
3  7 11 15
4  8 12 16
Reverse Each Row
Next, reverse each row of the transposed matrix:

First row: 1 5 9 13 becomes 13 9 5 1.
Second row: 2 6 10 14 becomes 14 10 6 2.
Third row: 3 7 11 15 becomes 15 11 7 3.
Fourth row: 4 8 12 16 becomes 16 12 8 4.
Matrix after Reversing Each Row:

Copy code
13  9  5  1
14 10  6  2
15 11  7  3
16 12  8  4

*/