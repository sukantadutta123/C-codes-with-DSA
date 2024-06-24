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

    // Check if addition is possible
    if (row1 != row2 || col1 != col2) {
        cout << "Addition not possible. The matrices do not have the same dimensions." << endl;
        return 0;
    }

    // Initialize two 2D vectors for the matrices and one for the result
    vector<vector<int>> a(row1, vector<int>(col1));
    vector<vector<int>> b(row1, vector<int>(col1));
    vector<vector<int>> result(row1, vector<int>(col1));

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix: -" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> a[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix: -" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> b[i][j];
        }
    }

    // Add the two matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print both matrices side by side with a + sign
    cout << "The matrices side by side with a + sign:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << a[i][j] << " ";
        }
        cout << "    ";
        for (int j = 0; j < col1; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    // Print the resulting matrix after addition
    cout << "The resulting matrix after addition is:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
