#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    int sum=0;

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

    // Optional: print the matrix to verify input
    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The Transpose of the matrix is:" << endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
