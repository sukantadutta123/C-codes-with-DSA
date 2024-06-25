#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }
    return false;
}

int main() {
    int rows, cols, target;

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

    cout << "Enter the target element to search: ";
    cin >> target;

    bool found = searchMatrix(matrix, target);
    if (found) {
        cout << "Element " << target << " found in the matrix." << endl;
    } else {
        cout << "Element " << target << " not found in the matrix." << endl;
    }

    return 0;
}





/* In main, declares variables rows, cols, and target.
Prompts the user to enter the number of rows and columns and reads them.
Declares a 2D vector matrix with the specified dimensions.
Prompts the user to enter the elements of the matrix and fills it using nested loops.
Prompts the user to enter the target element to search for.
Calls searchMatrix with the matrix and target, storing the result in found.
Prints whether the target element was found in the matrix.
Dry Run with Example
Let's consider a 4x4 matrix and target value 29:

makefile
Copy code
Matrix:
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50

Target: 29
Iteration Steps:
Initialization:

rows = 4, cols = 4
row = 0, col = 3 (top-right corner)
First Iteration:

matrix[0][3] = 40
40 > 29, so move left: col-- (col = 2)
Second Iteration:

matrix[0][2] = 30
30 > 29, so move left: col-- (col = 1)
Third Iteration:

matrix[0][1] = 20
20 < 29, so move down: row++ (row = 1)
Fourth Iteration:

matrix[1][1] = 25
25 < 29, so move down: row++ (row = 2)
Fifth Iteration:

matrix[2][1] = 29
29 == 29, target found, return true
Output:

mathematica
Copy code
Element 29 found in the matrix.
The dry run demonstrates how the algorithm efficiently narrows down the search area by leveraging the sorted properties of the matrix. The process starts at the top-right corner and makes decisions to move left or down based on the comparison with the target.
*/