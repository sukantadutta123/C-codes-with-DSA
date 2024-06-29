#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of corner elements in a rectangular matrix
void sumOfCornerElements(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // Ensure the matrix is at least 2x2 in size
    if (m < 2 || n < 2) {
        cout << "Matrix size is too small to have corner elements." << endl;
        return;
    }

    // Calculate sum of corner elements
    int sum = matrix[0][0] + matrix[0][n - 1] + matrix[m - 1][0] + matrix[m - 1][n - 1];

    cout << "Sum of corner elements: " << sum << endl;
}

int main() {
    int m, n;
    cout << "Enter the number of rows in the matrix: ";
    cin >> m;
    cout << "Enter the number of columns in the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    sumOfCornerElements(matrix);

    return 0;
}



/*
Explanation:
Input and Matrix Initialization:

User inputs the number of rows (m) and columns (n) for the matrix.
Matrix is initialized with user-provided dimensions and filled with user-provided elements.
Sum Calculation:

The sum of corner elements is calculated using nested for loops:
cpp
Copy code
int sum = matrix[0][0] + matrix[0][n - 1] + matrix[m - 1][0] + matrix[m - 1][n - 1];
matrix[0][0]: Top-left corner element.
matrix[0][n - 1]: Top-right corner element.
matrix[m - 1][0]: Bottom-left corner element.
matrix[m - 1][n - 1]: Bottom-right corner element.
Output:

The sum of corner elements is displayed.
Example Usage:
If the user inputs:

mathematica
Copy code
Enter the number of rows in the matrix: 3
Enter the number of columns in the matrix: 4
Enter the elements of the matrix:
1 2 3 4
5 6 7 8
9 10 11 12
The output will be:

yaml
Copy code
Matrix:
1 2 3 4
5 6 7 8
9 10 11 12
Sum of corner elements: 1 + 4 + 9 + 12 = 26
This version uses nested for loops to iterate through the matrix elements and compute the sum of the corner elements based on user input.








*/