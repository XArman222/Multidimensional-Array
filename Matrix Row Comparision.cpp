// Arman Majhi
// 24070123022

#include<iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    if(rows >= 2) {
        cout << "Comparing elements of 1st row with 2nd row:\n";
        for(int j = 0; j < cols; j++) {
            if(matrix[0][j] == matrix[1][j])
                cout << "Element " << j+1 << ": Equal (" << matrix[0][j] << ")\n";
            else
                cout << "Element " << j+1 << ": Not Equal (" << matrix[0][j] << " vs " << matrix[1][j] << ")\n";
        }
    } else {
        cout << "Matrix must have at least 2 rows.\n";
    }

    return 0;
}

// OUTPUT
// Enter number of rows and columns: 3
// 2
// Enter matrix elements:
// 1
// 2
// 3
// 4
// 5
// 6
// Comparing elements of 1st row with 2nd row:
// Element 1: Not Equal (1 vs 3)
// Element 2: Not Equal (2 vs 4)
