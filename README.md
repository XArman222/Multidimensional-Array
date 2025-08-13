EXPERIMENT - 8 - MULTIDIMENSIONAL ARRAYS IN C++
Aim: To study and implement C++ Multidimensional Arrays with various matrix operations.
Apparatus: VS Code or any C++ Compiler.
Theory:

Multidimensional Arrays are advanced data structures in C++ that allow storing data in multiple dimensions, most commonly used for matrix operations and mathematical computations. Understanding these concepts is essential for scientific computing, graphics programming, and algorithmic problem-solving.
Multidimensional Arrays in C++:

Multidimensional Arrays are arrays of arrays that provide a way to organize data in rows and columns (2D) or even higher dimensions. They offer:

    Matrix Representation: Natural way to represent mathematical matrices and tables
    Contiguous Memory: Elements are stored in row-major order for optimal cache performance
    Direct Access: O(1) access time using row and column indices
    Mathematical Operations: Foundation for linear algebra operations

int matrix[3][3];                    // Static 2D array
int dynamicMatrix[rows][cols];       // Variable-length array 
vector<vector<int>> stlMatrix;       // Dynamic 2D array using STL (Standard Template Library)

Key Matrix Operations:

Matrix operations form the core of linear algebra and are widely used in:

    Mathematical Computations: Addition, multiplication, transpose operations
    Graphics Programming: Transformations, rotations, and scaling
    Data Analysis: Statistical computations and data processing
    Scientific Computing: Solving systems of equations and simulations

Matrix Operations Covered:

    Basic Operations: Input, display, and element access
    Arithmetic Operations: Matrix addition and multiplication
    Transformation Operations: Matrix transpose
    Analysis Operations: Diagonal element processing and comparison
    Validation: Dimension checking and operation feasibility

Why This Matters:

Mastering multidimensional arrays is crucial for:

    Scientific Computing: Foundation for numerical methods and simulations
    Graphics Programming: 3D transformations and computer graphics
    Machine Learning: Data representation in neural networks and algorithms
    Engineering Applications: Signal processing and control systems
    Game Development: 2D grids, tile maps, and spatial data structures

Programs:
1. Take Input and Display Matrix Elements

Description: Fundamental program demonstrating matrix input and display operations using a 3x3 static array.

Algorithm:

    Declare a 3x3 integer matrix
    Prompt user to enter matrix elements
    Use nested loops to read elements row by row
    Store each element in the appropriate matrix position
    Display the complete matrix in proper row-column format

Sample Output:

Enter The elements of the matrix : 1 2 3 4 5 6 7 8 9 
1 2 3 
4 5 6 
7 8 9 

2. Addition of Matrices

Description: Implements matrix addition with dynamic sizing and dimension validation for two matrices.

Algorithm:

    Input dimensions for both matrices from the user
    Validate that both matrices have identical dimensions
    Create a 3D array to store both input matrices
    Read elements for both matrices using nested loops
    Display both input matrices for verification
    Perform element-wise addition: result[i][j] = mat1[i][j] + mat2[i][j]
    Display the resulting sum matrix

Sample Output:

Enter the dimension (rows) of matrix 1 : 2
Enter the dimension (coloumns) of matrix 1 : 2
Enter the dimension (rows) of matrix 2 : 2
Enter the dimension (coloumns) of matrix 2 : 2

Enter elements of matrix- 1 
Enter the element 1 , 1 : 1
Enter the element 1 , 2 : 2
Enter the element 2 , 1 : 3
Enter the element 2 , 2 : 4

Enter elements of matrix- 2 
Enter the element 1 , 1 : 4
Enter the element 1 , 2 : 3
Enter the element 2 , 1 : 2
Enter the element 2 , 2 : 1

The addition of the matrices is : 
5 5 
5 5 

3. Multiplication of Matrices

Description: Implements matrix multiplication with proper dimension validation and the standard multiplication algorithm.

Algorithm:

    Input dimensions for both matrices
    Validate multiplication feasibility (columns of first = rows of second)
    Create separate arrays for both matrices and result matrix
    Initialize result matrix elements to zero
    Input elements for both matrices
    Apply matrix multiplication formula: result[i][j] = Σ(mat1[i][k] × mat2[k][j])
    Display input matrices and the multiplication result

Sample Output:

Enter the dimension (rows) of matrix 1 : 2
Enter the dimension (columns) of matrix 1 : 3
Enter the dimension (rows) of matrix 2 : 3
Enter the dimension (columns) of matrix 2 : 2

The elements of matrix 1 are:
1 2 3 
4 5 6 

The elements of matrix 2 are:
7 8 
9 10 
11 12 

The multiplication of the matrices is:
58 64 
139 154 

4. Matrix Transpose

Description: Computes and displays the transpose of a matrix using dynamic sizing with vector implementation.

Algorithm:

    Input matrix dimensions from the user
    Create a 2D vector to store the matrix
    Read matrix elements using nested loops
    Display the original matrix
    Compute transpose by swapping row and column indices
    Display the transposed matrix where result[j][i] = original[i][j]

Sample Output:

Enter the number of rows for the matrix: 2
Enter the number of columns for the matrix: 3

Enter elements of the matrix-
Enter the element at (1, 1): 1
Enter the element at (1, 2): 2
Enter the element at (1, 3): 3
Enter the element at (2, 1): 4
Enter the element at (2, 2): 5
Enter the element at (2, 3): 6

The elements of the matrix are:
1 2 3 
4 5 6 

The transpose of the matrix is:
1 4 
2 5 
3 6 

5. Diagonal Addition

Description: Calculates the sum of diagonal elements in a square matrix with validation for square matrix requirement.

Algorithm:

    Input matrix dimensions and validate for square matrix (rows = columns)
    Read matrix elements from the user
    Display the complete matrix
    Calculate main diagonal sum: sum += matrix[i][i] for i = 0 to n-1
    Optionally calculate secondary diagonal sum: sum += matrix[i][n-1-i]
    Display the diagonal sum result

Sample Output:

Enter the dimension (rows) of matrix  : 3
Enter the dimension (coloumns) of matrix  : 3

Enter elements of matrix- 
Enter the element 1 , 1 : 1
Enter the element 1 , 2 : 2
Enter the element 1 , 3 : 3
Enter the element 2 , 1 : 4
Enter the element 2 , 2 : 5
Enter the element 2 , 3 : 6
Enter the element 3 , 1 : 7
Enter the element 3 , 2 : 8
Enter the element 3 , 3 : 9

The elements of the matrix are 
1 2 3 
4 5 6 
7 8 9 

The sum of diagonal elements is: 15

6. Compare Elements (First Row vs Second Row)

Description: Compares corresponding elements between the first and second rows of a matrix with detailed analysis.

Algorithm:

    Input matrix dimensions and validate minimum 2 rows requirement
    Read all matrix elements from the user
    Display the complete matrix
    Compare each element: first_row[j] with second_row[j]
    Categorize comparisons as greater, lesser, or equal
    Display detailed position-wise comparison results
    Provide summary statistics of comparison results

Sample Output:

Enter the dimension (rows) of matrix : 3
Enter the dimension (columns) of matrix : 4

The elements of the matrix are:
5 3 8 2 
4 6 8 9 
1 7 3 5 

Comparison of first row with second row:
Position 1: First row element (5) is greater than second row element (4)
Position 2: First row element (3) is less than second row element (6)
Position 3: First row element (8) is equal to second row element (8)
Position 4: First row element (2) is less than second row element (9)

Summary:
Elements where first row > second row: 1
Elements where first row < second row: 2
Elements where first row = second row: 1

Key Learning Outcomes:

    Matrix Fundamentals: Understanding 2D array structure and memory layout
    Dynamic Sizing: Working with variable-length arrays and user-defined dimensions
    Mathematical Operations: Implementing standard matrix operations correctly
    Input Validation: Ensuring operation feasibility through dimension checking
    Algorithm Implementation: Converting mathematical formulas into efficient code
    Memory Management: Optimizing array access patterns for better performance

Applications:

    Linear Algebra: Solving systems of equations and matrix computations
    Graphics Programming: 3D transformations and geometric operations
    Scientific Computing: Numerical analysis and simulation algorithms
    Data Science: Matrix operations for machine learning and statistics
    Game Development: Grid-based games and spatial calculations

