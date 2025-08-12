//Arman Majhi
//24070123022


#include <iostream>

using namespace std;

int main() {
    
    int Rows = 10;
    int Cols = 10;
    int matrix[Rows][Cols];

    int rows, cols;

    cout << "Enter the number of rows (max 10): ";
    cin >> rows;
    cout << "Enter the number of columns (max 10): ";
    cin >> cols;

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nYour matrix is:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

//output
Enter the number of rows (max 10): 3
Enter the number of columns (max 10): 3
Enter the matrix elements:
matrix[0][0]: 4
matrix[0][1]: 3
matrix[0][2]: 4
matrix[1][0]: 5
matrix[1][1]: 3
matrix[1][2]: 2
matrix[2][0]: 5
matrix[2][1]: 6
matrix[2][2]: 7

Your matrix is:
4	3	4	
5	3	2	
5	6	7                                      






