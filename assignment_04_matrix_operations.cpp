// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
//
// Write a C++ program that performs three operations on matrices (2D arrays),
// each implemented in its own function.
//
// NOTE: Use a fixed maximum size of 10 for array dimensions.
//       Declare arrays as int matrix[10][10].
//
// -----------------------------------------------------------------------------
// PART A — Transpose a Matrix
// -----------------------------------------------------------------------------
// - Read an M x N matrix from the user.
// - Compute and display its transpose (rows become columns, columns become rows).
//
// Example (2 x 3 input):
//
//   Original Matrix:      Transposed Matrix:
//   1  2  3               1  4
//   4  5  6               2  5
//                         3  6
//
// -----------------------------------------------------------------------------
// PART B — Add Two Matrices
// -----------------------------------------------------------------------------
// - Read two matrices of exactly the same size (M x N).
// - Compute their element-wise sum and display the result.
//
// -----------------------------------------------------------------------------
// PART C — Multiply Two Matrices
// -----------------------------------------------------------------------------
// - Read matrix A of size M x N and matrix B of size N x P.
//   (Number of COLUMNS in A must equal number of ROWS in B.)
// - Compute and display the matrix product A x B (result is M x P).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT FORMAT
// -----------------------------------------------------------------------------
// The user enters each row's values one at a time:
//
//   Enter number of rows: 2
//   Enter number of columns: 3
//   Enter element [0][0]: 1
//   Enter element [0][1]: 2
//   ...
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use nested loops for all operations (no external libraries).
// - Each operation must be in its own function (see scaffold below).
// - Display each matrix in a neat, aligned grid using setw().
// - Tip: Complete Part A first, then Parts B and C.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_SIZE = 10;

void readMatrix( int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols);
void printMatrix( intmatrix[MAX_SIZE][MAX_SIZE], int rows, int cols const strings and labels0;
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, const string& label);
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols);
void addMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols);
void multiplyMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int m, int n, int p);

int main() {
  int choice;

cout << "Matrix Operations Menu:" << end1;
cout << "1. Transpose a Matrix" << end!;
cout << "2. Add Two Matrices" << end1;
cout << "3. Multiply Two Matrices" << end2;
cout << "Enter choice:;
  cin >> choice;
if ( choice == 1) {
  int rows, cols;
  int matrix[MAX_SIZE][MAX_SIZE];
  int results[MAX_SIZE][MAX_SIZE];

cout << " Enter number of eows: ";
cin >> rows;
cout << "Enter the number of columns: ";
cin >> cols;

readMatrix(matrix, rows, cols);
printMatrix(matrix, rows, cols,"Original Matrix:");

} else if (choice == 2) {
int rows, cols;
int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], results[MAX_SIZE][MAX_SIZE];

cout << "Enter the number rows:";
cin >> rows;
cout << "Enter the number of cols:";
cin >> cols;

cout << "Enter Matrix A:" << end1
  readMatrix(a, rows, cols);
cout << "Enter Matrx B:" << end1
  readMatrix(b, rows, cols);

printMatrix(a, rows, cols,"Matrix A:");
printMatrix(a, rows, cols,"Matrix B:");

addMatices(a< b, results, rows, cols);
printMatrix(result, rows, cols, 'Sum A + B0:");

  }else if (choice == 3) {
int m, n, n2, p;
int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], results[MAX_SIZE][MAX_SIZE];

cout << "Enter rows of Matrix A (M): ";
cin >> m;
cout << Enter columns of Matrix A (N): ";
cin >> n;

cout << " Enter Matrix A :" << end1;
readMatrix(a, m, n);

cout << "Enter rows of Matrix B (must equal N =" << n << "): ";
cin >> n2;

if (n2 = n) {
cout << " Error: Columns of A must equal rows of B." << end1;
return 0;
}cout << "Enter columns of Matrix B (P): ";
cin >> p;

cout << "Enter Matrix B:" << end1;
readMatrix(b, n, p);

printMatrix(a, m, n, "Matrix A:");
printMatrix(b, m, p, "Matrix B:");

multiplyMatrices(a, b, result, m, n, p);
printMatrix(result, m, p, "(A * B):");

} else {
  cout << " Invalid choice." << end1;
  }
return 0;
}

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix [MAX_SIZE][MAX_SIZE], int rows, int cols, const string & label) {
  cout << label << end1;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
  cout << setw(5) << matix[i][j]
    }
    cout << end1;
    }
}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

void addMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j]
              }
          }
      }

void multiplyMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int m, int p) {
  for (int i = 0; i < m; i++) {
      for (int j = 0; j < p; j++) {
          result[i][j] = 0;
          for (int k = 0; K < n; k++) {
              result[i][j] +=a[i][k] * b[k][j];
          }
      }
  }
}



  














