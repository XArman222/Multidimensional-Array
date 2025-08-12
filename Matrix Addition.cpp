// Arman Majhi
// 24070123022

#include<iostream>
using namespace std;

int main() {
    int r1, c1,r2,c2;
    int sum=0;
    cout << "Enter number of rows of 1st matrix : ";
    cin >> r1;
    cout << "Enter number of columns of 1st matrix: ";
    cin >> c1;
    cout << "Enter number of rows of 2nd matrix : ";
    cin >> r2;
    cout << "Enter number of columns of 2nd matrix: ";
    cin >> c2;
    cout << endl;
    cout << "For first matrix: ";
    cout << endl;

    if(r1 == r2 && c1 == c2){

       int arr1[r1][c1], arr2[r2][c2]; 

    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    cout << "The 1st matrix is : " << endl;
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl; 
    }
    cout << endl;
    cout << "For second matrix: ";
    cout << endl;
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr2[i][j];
        }
    }
    cout << endl;
    cout << "The 2nd matrix is : " << endl;
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl; 
    }

    cout << "The sum matrix is: : " << endl;
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << arr2[i][j] + arr1[i][j] << " ";
        }
        cout << endl; 
    }
}

else
cout<<"Enter equal number of rows and columns for both the matrix";
    return 0;
}

// OUTPUT
// Enter number of rows of 1st matrix : 2
// Enter number of columns of 1st matrix: 2
// Enter number of rows of 2nd matrix : 2
// Enter number of columns of 2nd matrix: 2

// For first matrix:
// Enter element at position (1, 1): 1
// Enter element at position (1, 2): 2
// Enter element at position (2, 1): 3
// Enter element at position (2, 2): 4

// The 1st matrix is :
// 1 2
// 3 4

// For second matrix:
// Enter element at position (1, 1): 2
// Enter element at position (1, 2): 3
// Enter element at position (2, 1): 4
// Enter element at position (2, 2): 5

// The 2nd matrix is :
// 2 3
// 4 5
// The sum matrix is: :
// 3 5
// 7 9
