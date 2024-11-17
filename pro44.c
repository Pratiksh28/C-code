//44. Write a program to accept a matrix A of size m x n and store its transpose in matrix B. Display matrix B. Write separate functions. 

#include <stdio.h>

// Function to accept a matrix
void acceptMatrix(int matrix[][10], int m, int n) {
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int m, int n) {
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[][10], int m, int n, int transpose[][10]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int m, n;

    // Accept the size of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrixA[10][10];
    int transposeB[10][10];

    // Accept matrix A
    acceptMatrix(matrixA, m, n);

    // Display matrix A
    printf("Original ");
    displayMatrix(matrixA, m, n);

    // Calculate and display transpose of A in matrix B
    transposeMatrix(matrixA, m, n, transposeB);
    printf("Transpose ");
    displayMatrix(transposeB, n, m);

    return 0;
}