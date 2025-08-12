// Arman Majhi
// 24070123022

#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter the number of rows of the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> c1;

    cout << "Enter the number of rows of the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
        return 1;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2] = {0};

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    
    cout << "Matrix A:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Matrix B:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                C[i][j] = A[i][k] * B[k][j];
            }
        }
    }

    cout << "The resultant matrix is:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
// Enter the number of rows of the first matrix: 2
// Enter the number of columns of the first matrix: 2
// Enter the number of rows of the second matrix: 2
// Enter the number of columns of the second matrix: 2
// Enter elements of the first matrix:
// A[0][0]: 1
// A[0][1]: 2
// A[1][0]: 3
// A[1][1]: 4
// Enter elements of the second matrix:
// B[0][0]: 4
// B[0][1]: 3
// B[1][0]: 2
// B[1][1]: 1
// Matrix A:
// 1 2
// 3 4
// Matrix B:
// 4 3
// 2 1
// The resultant matrix is:
// 4 2
// 8 4
