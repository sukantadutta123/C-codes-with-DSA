#include <bits/stdc++.h>
using namespace std;

int main() {
    int row1, col1, row2, col2;

    // Input dimensions for the first matrix
    cout << "Enter Row Size for the first matrix: -" << endl;
    cin >> row1;
    cout << "Enter Column Size for the first matrix: -" << endl;
    cin >> col1;

    // Input dimensions for the second matrix
    cout << "Enter Row Size for the second matrix: -" << endl;
    cin >> row2;
    cout << "Enter Column Size for the second matrix: -" << endl;
    cin >> col2;

    // Check if multiplication is possible
    if (col1 != row2) {
        cout << "Multiplication not possible. The number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
        return 0;
    }

    // Initialize two 2D vectors for the matrices and one for the result
    vector<vector<int>> a(row1, vector<int>(col1));
    vector<vector<int>> b(row2, vector<int>(col2));
    vector<vector<int>> result(row1, vector<int>(col2, 0));

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix: -" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> a[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix: -" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> b[i][j];
        }
    }

    // Multiply the two matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print both matrices side by side with a * sign
    cout << "The matrices side by side with a * sign:" << endl;
    for (int i = 0; i < max(row1, row2); i++) {
        if (i < row1) {
            for (int j = 0; j < col1; j++) {
                cout << a[i][j] << " ";
            }
        } else {
            for (int j = 0; j < col1; j++) {
                cout << "  ";
            }
        }
        
        cout << (i == row1 / 2 ? "  *  " : "     ");
        
        if (i < row2) {
            for (int j = 0; j < col2; j++) {
                cout << b[i][j] << " ";
            }
        } else {
            for (int j = 0; j < col2; j++) {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Print the resulting matrix after multiplication
    cout << "The resulting matrix after multiplication is:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
