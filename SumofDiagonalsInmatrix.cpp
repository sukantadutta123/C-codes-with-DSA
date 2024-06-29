#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the sum of both diagonals in a square matrix
void sumOfDiagonals(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; ++i) {
        primarySum += matrix[i][i]; // Sum of elements in primary diagonal
        secondarySum += matrix[i][n - 1 - i]; // Sum of elements in secondary diagonal
    }

    cout << "Sum of primary diagonal: " << primarySum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    sumOfDiagonals(matrix);

    return 0;
}


/*
Explanation:
sumOfDiagonals Function:

Unchanged from the previous explanation. It calculates the sum of elements in both the primary and secondary diagonals of a square matrix.
Main Function:

Prompts the user to enter the size (n) of the square matrix.
Creates a 2D vector matrix of size n x n to store the matrix elements.
Prompts the user to enter the elements of the matrix row by row.
Prints the entered matrix for visualization.
Calls the sumOfDiagonals function with the matrix as an argument to compute and print the sums of both diagonals.
Example Usage:
If the user enters 3 for the size of the matrix and then enters the elements:

mathematica
Copy code
Enter the size of the square matrix: 3
Enter the elements of the matrix:
1 2 3
4 5 6
7 8 9
The output will be:

yaml
Copy code
Matrix:
1 2 3
4 5 6
7 8 9
Sum of primary diagonal: 15
Sum of secondary diagonal: 15
This updated code allows flexibility by letting the user input the size and elements of the matrix, ensuring it works correctly for any square matrix size specified.
*/