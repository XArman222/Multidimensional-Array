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

    int A[10][10], B[10][10], C[10][10];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                int temp = 0;
                for (int m = 0; m < B[k][j]; ++m) {
                    temp = temp + A[i][k];
                }
                for (int p = 0; p < temp; ++p) {
                    C[i][j] = C[i][j] + 1;
                }
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
// 1
// 2
// 3
// 4
// Enter elements of the second matrix:
// 4
// 3
// 2
// 1
// The resultant matrix is:
// 8 5 
// 20 13
