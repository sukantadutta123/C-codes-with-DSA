#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col;

    cout << "Enter Row Size: -" << endl;
    cin >> row;
    cout << "Enter Column Size: -" << endl;
    cin >> col;

    // Correctly initialize the 2D vector after getting row and col sizes
    vector<vector<int>> a(row, vector<int>(col));

    cout << "Enter Matrix Elements: -" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }

    // Print the matrix
    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and print the sum of each row
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < row; i++) {
        int rowSum = 0;
        for (int j = 0; j < col; j++) {
            rowSum += a[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}
